#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(void)
{
    string location,num,alph;
    cin >> location;
    for (char i : location)
    {
        if (isdigit(i))
        {
            num += i;
        }
        else
        {
            alph += i;
        }
    }
    int ans = 0;
    for (int i = alph.size() - 1; i >= 0; i--)
    {
        ans += (((int)alph[i] - 'A' + 1) * pow(26, (alph.size() - i - 1)));
    }
    ans *= stoi(num);
    cout << ans;
}