#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,ans=0;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],a1[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>a1[i];
	    }
	    sort(a,a+n);
	    sort(a1,a1+n);
	   // ans=a[n-1]+a1[n-1];
	   for(int i=0;i<n;i++){
	        ans=max(ans,(a[i]+a1[n-1-i]));
	    }
	    cout<<ans<<endl;
	    ans=0;
	}
	return 0;
}
