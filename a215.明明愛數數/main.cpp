#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int num=0,cnt=0;
        for(int i=0;num<=m;i++)
        {
            num+=n+i;
            cnt++;
        }
        if(cnt==0)
        {
            cnt++;
        }
        cout<<cnt<<endl;
    }
}