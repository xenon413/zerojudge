#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;
bool cmp(vector<int> a, vector<int>b){
    return pow(a[0], 2)+pow(a[1], 2)>pow(b[0], 2)+pow(b[1], 2);
}
int main(){
    //input
    int n;
    cin>>n;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        vector<int>temp;
        int a, d;
        cin>>a>>d;
        temp.push_back(a);
        temp.push_back(d);
        arr.push_back(temp);   
    }

    //sort
    sort(arr.begin(), arr.end(), cmp);
    cout<<arr[1][0]<<" "<<arr[1][1];
}