#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int a,b,c,d,e,f;
   while(cin>>a>>b>>c)
   {
       d=sqrt((b*b)-(a*c*4));
       e=(d-b)/(a*2);
       f=(-d-b)/(a*2);

       if(d<0)
       {
           cout<<"No real root ";
       }
       else if(e==f)
       {
           cout<<"Two same roots "<<"x="<<e;
       }
       else if(e!=f)
       {
           cout<<"Two different roots "<<"x1="<<e<<" , x2="<<f;
       }
   }
}