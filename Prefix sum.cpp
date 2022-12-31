#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if((n==2) or ((n/2)%2!=0)){cout<<"NO\n"; continue;}
	    cout<<"YES\n";
	    for(int i=1;i<=n;i+=2){
	        if(i==(n/2)-1) {cout<<i<<" "; i+=1;}
	        else cout<<i<<" ";
	    }
	    cout<<endl;
	    for(int i=2;i<n;i+=2){
	        if(i==(n/2)) {cout<<i<<" "; i-=1;}
	        else cout<<i<<" ";
	    }
	    cout<<endl;
	    
	    
	}
	
	
	return 0;
}
