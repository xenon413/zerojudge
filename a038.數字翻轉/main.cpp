#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int b,d;
    while(cin>>a)
    {
        b=a.size(); //數位數
        b-=1;   //a從零開始數

        for(int i=b;i>=0;i--)
        {
            d=0;
           if(b==0)//只有一位數的部分
           {
              cout<<a[0];
              break;
           }


            for(int k=0;;k++)//刪去零
            {


                if(a[b-k]=='0')
                {
                    d+=1;
                }
                else
                {
                    break;
                }
            }
            if(i-d>=0)
                cout<<a[i-d];
            if(d==b+1)
            {
                cout<<0;
                break;
            }

        }
        cout<<endl;
    }
}