#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int cmp(int a, int b)
{
    return a * a < b* b;
}
int main()
{
    int n = 0, num = 0,ans=0;
    vector<int>vec;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end(), cmp);
    for (int i = 0; i < n-1; i++)
    {
        if (vec[i] >= 0 && vec[i + 1] < 0)
            ans++;
        else if (vec[i] < 0 && vec[i + 1] >= 0)
            ans++;
    }
    cout << ans;
}