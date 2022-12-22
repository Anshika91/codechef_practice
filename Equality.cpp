#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
typedef vector<long long> vll;
typedef long long ll;

void solve(){
     int n;
     cin>>n;
     int a[n];
     int s=0;
     for(int i=0;i<n;i++){
         cin>>a[i];
         s+=a[i];
     }
     for(int i=0;i<n;i++){
         cout<<(s/(n-1) - a[i])<<" ";
     }
     cout<<endl;
}
	
    
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T = 1;
	std::cin >> T;
	while(T--){
	    solve();
	}
	return 0;
}
