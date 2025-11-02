#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a)
    {
        c=0;
        for(int i=1;i<=a;i++)
        {
            cin>>b;
            c+=b;
        }
        if(c>59*a)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
}