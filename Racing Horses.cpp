#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n] , mini = 1000000000;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n-1;i++){
	        mini = min(mini , a[i+1] - a[i]);
	    }
	    cout<<mini<<endl;
	}   
	return 0;
}
