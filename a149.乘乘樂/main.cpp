#include<iostream>
using namespace std;
int main()
{
    int a,b,k,c;
    int cnt;
    while(cin>>a)
    {
        for(int i=1;i<=a;i++)
        {
            c=1;
            cin>>b;
            if(b<=9&&b>=1)
            {
                cout<<1<<endl;
                continue;
            }
            if (b==0)
            {
                cout<<0<<endl;
                continue;
            }
                

            while(b>1)
            {
                cnt=0;
                while(b%10!=0)
                {
                    b--;
                    cnt++;
                }
                b/=10;
                c*=cnt;
            }
            cout<<c<<endl;
        }
    }
}