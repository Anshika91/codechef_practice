#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
       	int T;
	cin >> T;
	for(ll i=0; i<T; i++){
	    ll x,N,K,L,max = 0;
	    cin >> N >> K >> L;
	    vector<ll> A;
	    for(ll j=0; j<N; j++){
	        cin >> x;
	        if(max <x){
	            max = x;
	        }
	        A.push_back(x);
	    }
	    if (x == max){
	        cout <<"Yes\n";
	    }
	    else{
	        if (max >= std::max( x + K*(L-1),x))cout << "No\n";
	        else cout << "Yes\n";
	    }
	    
	    
	    
	}
	return 0;
}
