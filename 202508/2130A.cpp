#include <bits/stdc++.h>
using namespace std;

int a[51];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= 50; i++)
            a[i] = 0;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int tmp;
            cin >> tmp;
            a[tmp]++;
        }
        int ans = 0;
        int m = min(a[0], a[1]);
        ans += m * 2;
        a[0] -= m, a[1] -= m;
        ans += a[0];
        a[0] = 0;
        for (int i = 1; i <= 50; i++)
        {
            ans += a[i] * i;
        }
        cout << ans << endl;
    }
    return 0;
}

// It's been a long time since I solved algorithm problems, now even a simple 800-point problem takes me an hour.I need to work harder in the future.
// 在S'的mex小于3的时候选择mex才是更有价值的，否则选择sum能得到更多的score。
// https://codeforces.com/contest/2130/problem/A