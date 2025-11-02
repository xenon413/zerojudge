#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a)
    {
        if(a<=10)
        {
            b=a*6;
            cout<<b;
        }
        if(a>10&&a<=20)
        {
            b=10*6+(a-10)*2;
            cout<<b;
        }
        if(a>20)
        {
            b=10*6+10*2+(a-20);
            if(b>100)
                b=100;
            cout<<b;
        }
        cout<<endl;

    }
}