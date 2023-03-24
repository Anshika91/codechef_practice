#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0,c=0,k=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	    cin>>a[i];
	    }

	   for(int i=0;i<n;i++){
	    count+=a[i];
	    }
	    if(count%2==0)cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	
	return 0;
}
