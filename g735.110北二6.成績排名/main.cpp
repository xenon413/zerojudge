#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v1, v2;
    map<int, int>m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
        v2.push_back(a);
        m[a]=101;
    }
    sort(v2.begin(), v2.end());
    int cnt = 1;
    for(int i=v2.size()-1;i>=0;i--){
        m[v2[i]] = min(m[v2[i]], cnt);
        cnt++;
    }
    for(int i=0;i<v1.size();i++){
        cout<<m[v1[i]]<<" ";
    }
    
    return 0;
}