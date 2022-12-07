#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p pow()

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n,x;
	    cin>>n>>x;
	    ll ans = pow(2,n);
	    ll power = pow(2,x);
	    cout<<power/ans<<endl;
	}
	return 0;
}
