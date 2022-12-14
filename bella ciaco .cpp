#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ThxDem=b;i<ThxDem;++i)
#define pb push_back
#define ALL(s) s.begin(),s.end()
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

ll sq(ll x){return x*(x-1)/2;}

int main(){FIN;
	int t; cin>>t;
	while(t--){
		ll x,d,p,q; cin>>x>>d>>p>>q;
		
		ll ans=p*x;
		
		ll tot=x/d;
		ans+=q*d*sq(tot);
		
		ll rem=x%d;
		ans+=rem*q*tot;
		
		cout<<ans<<"\n";
	}
}
