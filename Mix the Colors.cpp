// Just Not the Best :)

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

//DataTypes
using str =  string;
using ll  = long long;
using vl  = vector<ll>;
using ld  = long double;
using vs  = vector<str>;
using vpl = vector<pair<ll,ll>>;

//Shorts
#define dbg(x)  cout<<#x<<" = "<<x<<'\n';

//Functions
#define sz(x)     ((ll)(x).size())
#define all(x)    x.begin(),x.end()
#define srt(x)    sort(all(x))
#define srtd(x)   sort(x.rbegin(),x.rend())
#define rev(x)    reverse(all(x));
#define Vmax(x)   *max_element(all(x))
#define Vmin(x)   *min_element(all(x))
#define Vsum(x)   accumulate(all(x),0ll)

//loops
#define For(n)  for (ll i = 0; i < n; i++)
#define ForR(n) for (ll i = n-1; i >= 0; i--)
#define Forj(n) for (ll j = 0; j < n; j++)
#define For1(n) for (ll i = 1; i < n; i++)
#define Forl(x,y,z) for (ll x = y; x < z; x++)

//IO
#define nl       cout << "\n";
#define ya       cout << "YES\n";
#define na       cout << "NO\n";
#define inpt(v)  For(sz(v)) cin >> v[i];
#define print(v)   {for(auto i:v) cout << i << " "; cout << "\n";}

ll mod_add(ll a,ll b){ll p=((a%MOD)+(b%MOD))%MOD;return p;}
ll mod_sub(ll a,ll b){ll p=(((a%MOD)-(b%MOD))+MOD)%MOD;return p;}
ll mod_mult(ll a,ll b){ll p=((a%MOD)*(b%MOD))%MOD;return p;}
//Below function is for binary exponentation
ll bin_exp(ll a,ll b){ll res=1;while(b>0){if(b&1){res=((res%MOD)*(a%MOD))%MOD;}
a=((a%MOD)*(a%MOD))%MOD;b>>=1;}return res;}


void solve()
{
   int n;
   cin >> n;
   vl arr(n);
   map<int, int> mp;
   For(n)
   {
      cin >> arr[i];
      mp[arr[i]]++;
   }
   int cnt = 0;
   for(auto it : mp)
   {
      if(it.second > 1)
      {
         cnt += it.second - 1;
      }
   }
   cout << cnt << endl;
}

int main()
{
   ios_base::sync_with_stdio(0); cin.tie(0);
   int t = 1;
   cin >> t;
      
   while(t--) {
        solve();
   }

   return 0;
}
