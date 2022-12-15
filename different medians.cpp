#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[1001], l, r;
void solve()
{
    cin >> n;
    a[1] = 0;
    l = 0;
    r = 0;
    for (int i = 2; i <= n; ++i)
        if (i % 2 == 0)
            a[i] = --l;
        else
            a[i] = ++r;
    for (int i = 1; i <= n; ++i)
        cout << a[i] - l + 1 << ' ';
    cout << endl;
}
signed main()
{
    int anshii;
    cin >> anshii;
    while (anshii--)
        solve();
}
