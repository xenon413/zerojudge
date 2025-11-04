#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<math.h>
#include<sstream>
#include <algorithm>
using namespace std;

int to_dec(string n, int base);
string to_n(int num, int n, map<int, char> icmp);

int main(){
    //inputs
    string k;
    cin>>k;

    int l;
    cin>>l;

    string s;
    cin>>s;

    // create map
    map<char, int>cimp;
    map<int, char>icmp;
    for(int i=0;i<k.size();i++){
        cimp[k[i]] = i;
        icmp[i] = k[i];
    }

    vector<int> dp;
    //init vector
    for(int i=0;i<92378;i++){
        dp.push_back(0);
    }
    //get all combination of s
    int minord = 0;
    for(int i=0;i<=s.size()-l;i++){
        string sub="";
        //get substring order
        for(int j=0;j<l;j++){
            sub += to_string(cimp[s[i+j]]);
        }
        // cout<<sub<<" ";
        int ord = to_dec(sub ,k.size());
        // cout<<temp<<" ";
        dp[ord] = 1;

        //update min order
        if(ord == minord){
            while(dp[minord]==1){
                minord++;
            }
        }
    }
    // cout<<minord;
    string res = to_n(minord, k.size(), icmp);
    //pad zero
    while(res.size()<l){
        res=icmp[0]+res;
    }
    cout<<res;
}

int to_dec(string n, int base){
    int res = 0;
    for(int i=0;i<n.size();i++){
        res += (n[i]-48)*pow(base, n.size()-i-1);
    }
    return res;
}

string to_n(int num, int n, map<int, char> icmp){
    int q=num;
    string res = "";
    while(q>0){
        int r = q%n;
        q /=n;
        res+=icmp[r];
    }
    reverse(res.begin(), res.end());
    return res;
}