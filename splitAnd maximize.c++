#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll M=998244353;


int main() {
	// your code goes here
	ll anshii;
	cin>>anshii;
	while(anshii--)
	{
	    ll n;
	    cin>>n;
	    ll temp;
	    ll sum=0;
	    for(ll i=0; i<n; i++)
	    {
	        cin>>temp;
	        sum+=temp;
	        sum%=M;
	    }
	    ll ans(sum*(sum-1)%M);
	    cout<<ans<<endl;
	}
	return 0;
}
