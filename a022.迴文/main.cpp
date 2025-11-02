#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int cnt,b;
    while(cin>>a)
    {
        b=a.size();
        cnt=0;
        for(int i=0;i<=b/2-1;i++)
        {
            if(a[0+i]==a[(b-1)-i])
            {
                cnt++;
            }
        }
        if(cnt==b/2)
            cout<<"yes";
        else
            cout<<"no";
    }
}