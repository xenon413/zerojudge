#include<iostream>
using namespace std;
int main(void)
{
    int cnt;
    while(cin>>cnt)
    {

        for(int i=0;i<cnt;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(a+b>c&&b+c>a&&a+c>b)
            {
                if(a==b||b==c||a==c)
                {
                   cout<<1<<" "<<1<<endl;
                }
                else
                {
                    cout<<1<<" "<<0<<endl;
                }
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
return(0);
}