#include<iostream>
using namespace std;

int GCD(int imax, int imin) 
{
    if (imin == 0) return imax;
    return GCD(imin, imax % imin);
}

int main(void)
{
    while (true)
    {
        int N,G=0;
        cin >> N;
        if (N == 0)
            break;
        for (int i = 1; i < N; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                G += GCD(i, j);
            }
        }
        cout << G<<'\n';
    }
}