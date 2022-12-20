#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define ld long double
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int mod = 1000000007;
int n,q,k;

vector<int> v;
vector<vector<int>> p;

void solve() {
    fast;
    cin>>n;
    cin>>q;

    p.clear();
    v.clear();
    p.assign(n+1, vector<int>(31));

    for(int i=0; i<n; i++){
        int x; cin>>x; v.push_back(x);
    }

    for(int i=0; i<31; i++){
        for(int j=0; j<n; j++){
             if(v[j]&(1<<i)){
                  p[j+1][i]++;
             }
        }
    }
    
    for(int i=0; i<31; i++){
        for(int j=0; j<n; j++){
            p[j+1][i]+=p[j][i];
        }
    }


   while(q--){
         int l,r;  cin>>l>>r;
         int ansX=0ll;
         int ansO=0ll,ansA=0ll;
        for(int i=0; i<31; i++){
            int t = p[r][i]-p[l-1][i];
            if(t<((r-l+1)-t)){
               ansX |=(1ll<<i);
            }
            if(t!=(r-l+1)){
                ansO |=(1ll<<i);
            }
            if(t){
                ansA |=(1ll<<i);
            }
        }   
      cout<<ansX<<endl;
   }
}

signed main() {
    fast;
    int t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}
