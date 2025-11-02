#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a;
    for(int f=a;f>0;f--)
    {
        cin>>b>>c>>d>>e;
        if(c-b==d-c)
        {
            int g;
            g=e+(c-b);
            cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<g<<endl;
        }
        else if(c/b==e/d)
        {
            int h;
            h=e*(c/b);
            cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<h<<endl;
        }

    }
}