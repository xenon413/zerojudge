#include<iostream>
using namespace std;
int main()
{
    int n=0;
    while (cin >> n)
    {
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 400 == 0)
            {
                cout << "a leap year" << endl;
            }
            if (a % 4 == 0 && a % 100 != 0)
            {
                cout << "a leap year" << endl;
            }
            else if (a % 400 != 0)
            {
                cout << "a normal year" << endl;
            }
            else if (a % 4 != 0 && a % 100 == 0)
            {
                cout << "a normal year" << endl;
            }
        }
    }
    return(0);
}