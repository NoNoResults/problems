#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int j = n % 2;
        bool ans = 0;
        if (a % 2 != j && a > b)
        {
            cout << "NO" << endl;
            continue;
        }
        if (b % 2 == j && b >= a)
        {
            cout << "YES" << endl;
            continue;
        }
        if (a % 2 == j && b % 2 == j)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}