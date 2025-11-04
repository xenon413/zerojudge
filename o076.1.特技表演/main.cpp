#include<iostream>

using namespace std;

int main(){
    int n, h, cnt=1, max_cnt = 0;
    cin>>n;
    cin>>h;
    int pre = h;
    for(int i=1;i<n;i++){
        cin>>h;
        if(h<pre)
            cnt++;
        else{
            max_cnt = max(max_cnt, cnt);
            cnt=1;
        }
        pre=h;
    }
    if(max_cnt<cnt)
        max_cnt=cnt;
    cout<<max_cnt;
}