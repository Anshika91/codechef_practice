#include <bits/stdc++.h>
using namespace std;

long long anshii,n;
long long a[10000009];

int main() {
	// your code goes here
	cin>>anshii;
	while(anshii--)
	{
	    cin>>n;
	    for(int i=1; i<=n; i++) cin>>a[i];
	    sort(a+1,a+n+1);
	    cout<<n - a[n]<<endl;
	}
	return 0;
}
