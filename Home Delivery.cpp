#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;
#define endl "\n"
#define debug(val) printf("check%d\n", val)
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define FF first
#define SS second
#define ll long long
#define ull unsigned long long
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define forr(k) for (int i = 0; i < k; i += 1)
#define For(j, k) for (int i = j; i < k; i += 1)
#define MOD 1000000007
#define clr(val) memset(val, 0, sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

vector<vector<ll>> adj(305);
vector<ll> vis;

void dfs(ll src, ll cmp)
{
    vis[src] = cmp;

    for (auto nbr : adj[src])
    {
        if (vis[nbr] == -1)
        {
            dfs(nbr, cmp);
        }
    }
}

int main()
{
    FIO;
    // OJ;
    ll t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        forr(m)
        {
            ll a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vis.assign(n, -1);

        ll cmp = 0;
        forr(n)
        {
            if (vis[i] == -1)
            {
                cmp++;
                dfs(i, cmp);
            }
        }

        ll q;
        cin >> q;
        while (q--)
        {
            ll s, d;
            cin >> s >> d;

            if (vis[s] == vis[d])
            {
                cout << "YO\n";
            }
            else
            {
                cout << "NO\n";
            }
        }

        forr(n)
        {
            adj[i].clear();
        }
        
    }
}
