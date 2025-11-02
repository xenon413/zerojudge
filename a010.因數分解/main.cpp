#include<iostream>
using namespace std;
int main()
{
    int a,cnt;
    while(cin>>a)
    {
        if(a==1)
        {
            cout<<1;
        }
        for(int i=2;i<=a;i++)
        {
            cnt=0;
            if(a==1)
            {
                break;
            }
            while(a/i*i==a&&a>1)
            {
                a/=i;
                cnt++;
            }
            if(cnt==0)
            {
                continue;
            }
            if(cnt==1)
            {
                cout<<i;
            }
            else
            {
                cout<<i<<"^"<<cnt;
            }
            if(i<a)
            {
                cout<<" * ";
            }
        }
        cout<<endl;
    }
}