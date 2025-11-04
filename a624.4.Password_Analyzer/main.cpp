#include<iostream>

using namespace std;

int main(void)
{
    string password;
    while (cin >> password)
    {
        int cnt = 0;
        bool Long = false, cap = false, low = false, num = false;
        if (password.size() >= 8)
            Long = true;
        for (char i : password)
        {
            
            if (islower(i))
                low = true;
            else if (isupper(i))
                cap = true;
            else
                num = true;
        }
        if (cap && low)
            cnt += 1;
        if ((cap || low) && num)
            cnt += 1;
        if (Long)
            cnt += 1;
        string ans;
        if (cnt == 0)
            ans = "WEAK";
        else if (cnt == 1)
            ans = "ACCEPTABLE";
        else if (cnt == 2)
            ans = "GOOD";
        else
            ans = "STRONG";
        cout << "This password is " << ans << endl;
    }
}