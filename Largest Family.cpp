// I Can do all things...

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ulli unsigned long long int
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define loop(x, n) for (int x = 0; x < n; ++x)

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;

const int M = 1000000007;
const int P = 31;

int highestPowerOf2(unsigned int n) {
    if (n < 1)
        return 0;
    int res = 1;
    for (int i = 0; i < 8 * sizeof(unsigned int); i++) {
        int curr = 1 << i;
        if (curr > n)
            break;
        res = curr;
    }
    return res;
}

int binExp(int a, int b) {
    if (b == 0)
        return 1;
    long long res = binExp(a, b / 2);
    if (b & 1)
        return (a * ((res * res) % M)) % M;
    return (res * res) % M;
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

void dfs(int i, vi &vis, vvi &adj) {
    vis[i] = 1;
    for (auto it : adj[i]) {
        if (!vis[it])
            dfs(it, vis, adj);
    }
}

ll compute_hash(string const &s) {
    ll hash_value = 0;
    ll p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % M;
        p_pow = (p_pow * P) % M;
    }
    return hash_value;
}

void solve() {
    ll n, i, j, k, ans=0;
    cin>>n;
    vi v;
    loop(i, n) {
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(all(v));
    
    int rem = n-1;
    loop(i, n) {
        if(v[i]<=rem) {
            ans++;
            rem-=v[i];
        }
    }
    
    cout<<ans<<"\n";
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
