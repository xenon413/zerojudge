#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a)
    {
       for(int i=1;i<=a;i++)
       {
           cin>>b>>c;
           d=0;
           if(b==1)
            d+=1;
           for(int k=2;k<=c;k++)
           {
               if(pow(k,2)<=c&&pow(k,2)>=b)
               {
                   d+=k*k;
               }
           }
           cout<<"Case "<<i<<": "<<d<<endl;
       }
    }
}