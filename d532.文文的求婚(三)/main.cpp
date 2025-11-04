#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,cnt=0;
    while (cin >> a>>b)
    {
        cnt = 0;
        for (int i = a ; i <= b;i+=1)
        {
            if (i % 400 == 0)
            {
                cnt++;
            }
            if (i % 4 == 0 && i % 100 != 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}