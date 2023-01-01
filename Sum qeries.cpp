#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	
	ll m,n;
	cin>>n>>m;
	while(m--){
	    ll q,i;
	    cin>>q;
	    if(q<n+2){
	        cout<<0<<endl;
	        continue;
	    }
	    ll a=3*n-q+1;
	  if(q<2*n+1){
	      a=q-(n+2)+1;
	  }
	  cout<<a<<endl;
	  
	}
}
