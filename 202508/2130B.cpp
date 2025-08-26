#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        a[1] = a[2] = a[0] = 0;
        int n, s;
        int sum = 0;
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
        {
            int tmp;
            cin >> tmp;
            a[tmp]++;
            sum += tmp;
        }
        if (sum == s || (s - sum) > 1)
            cout << -1 << endl;
        else
        {
            while (a[0]--)
                cout << 0 << " ";
            while (a[2]--)
                cout << 2 << " ";
            while (a[1]--)
                cout << 1 << " ";
            cout << endl;
        }
    }
    return 0;
}
// Alice 至少需要走完全程，最少会获得sum，若s小于sum，Alice 会直接失败。
// bob 无论何时应该按0 2 1的样式排序，这样可以避免出现0 1序列，这个子序列是无敌的，可以直接填满所有sum和s的差值。
// 当s等于sum时，只要走完全程，无论如何排序Alice 都可以获得s。
// 当s大于sum时，若s - sum == 1，Alice无法通过再走一遍某两个数获得1。若s - sum > 1，Alice怎么都可以填满这个差值。