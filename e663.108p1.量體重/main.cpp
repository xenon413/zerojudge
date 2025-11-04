#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{

    int num,cnt=0;
    vector<int>w;
    while(cin>>num)
    {
        cnt++;
        w.emplace_back(num);
        sort(w.begin(),w.end());
        if(cnt==10)
        {
            int a=0,b=0,c=0,d=0,e=0,all=0;
            for(int i=0;i<10;i++)
            {
                all+=w[i];
            }
            c=all/4-w[0]-w[9];
            a=w[1]-c;
            b=w[0]-a;
            e=w[8]-c;
            d=w[9]-e;
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
            cnt=0;
            w.clear();
        }
    }
    return(0);
}