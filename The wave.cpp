#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define pi pair<ll,ll>
#define vii vector<pi>
#define vvi vector<vi>
#define mp map<ll,ll>
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define ff first
#define ss second
const ll N = 1e5 + 2, MOD = 1e9 + 7;

signed main()
{
    ll n, q;
    cin >> n >> q;

    vi a(n);
    rep(i,0,n)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    rep(i,0,q)
    {
        ll x;
        cin >> x;

        ll low = 0, high = n-1;
        bool flag = 0;

        while(low <= high)
        {
            ll mid = (low + high) / 2;
            if(a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if(x < a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if(flag)
            cout << "0" << endl;
        else
        {
            if(high == -1)
            {
                cout << ((n % 2)? "NEGATIVE" : "POSITIVE") << endl;
            }
            else if(low == n)
            {
                cout << "POSITIVE" << endl;
            }
            else
            {
                cout << (((n - high - 1) % 2)? "NEGATIVE" : "POSITIVE") << endl;
            }
        }
    }

    return 0;
}
