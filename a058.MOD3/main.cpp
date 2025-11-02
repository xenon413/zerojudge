#include<iostream>
using namespace std;
int main()
{
    int a;
    int b[a-1];
    while(cin>>a)
    {
        cout<<endl;
        int cnt=0,cnt2=0,cnt3=0;
        for(int i=0;i<=a-1;i++)
        {
            int num;
            cin>>num;
            if(num%3==0)
                cnt++;
            if(num%3==1)
                cnt2++;
            if(num%3==2)
                cnt3++;
        }
        cout<<cnt<<" "<<cnt2<<" "<<cnt3;
    }
}