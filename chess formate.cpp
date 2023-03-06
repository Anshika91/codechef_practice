#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a + b < 3)
            cout << "1";
        else if(a+b <= 10)
            cout << "2";
        else if(a+b <= 60)
            cout << "3";
        else
            cout << "4";
        cout << '\n';
    }
}
