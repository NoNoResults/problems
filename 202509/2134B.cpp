#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            int c = a[i] % (k + 1);
            a[i] += (long long)c * k;
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}

// 问题大意:有一个数组a，给每一个ai加上0 or ci * k (0 <= ci <= k),使得到的数组b有gcd(b) > 1;
// 等价ai + ci * k ≡ 0(mod g);
// g的选择:当g = k + 1时，ai + ci * k ≡ 0(mod g) => ai + ci * k ≡ 0(mod k + 1),when mod k + 1, k ≡ -1, ai + ci * k ≡ ai + ci * (-1) ≡ ai - ci ≡ 0(mod k + 1), so ai ≡ ci(mod k + 1);
// ci = ai % (k + 1), ai += ci * k;