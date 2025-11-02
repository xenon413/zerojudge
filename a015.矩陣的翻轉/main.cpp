#include<iostream>
using namespace std;
int main()
{
    int a,b;

    while(cin>>a>>b)
    {
        int c[a][b];
        for(int i=0;i<a;i++)
        {
                for(int k=0;k<b;k++)
                {
                    int num;
                    cin>>num;
                    c[i][k]=num;

                }
        }
        for(int x=0;x<b;x++)
        {
            for(int y=0;y<a;y++)
            {
                int num;
                num=c[y][x];
                cout<<num<<" ";
            }
            cout<<endl;
        }

    }
}