#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n],max=0;
	    for(int x=0;x<n;x++) {
	        cin>>arr[x];
	        if(max<arr[x]){
	            max=arr[x];
	        }}
	    bool c[max]={0};
	    for(int i=0;i<n;i++){
	        c[arr[i]-1]=not c[arr[i]-1];
	    }
	    bool flag=0;
	    for(int i=0;i<max;i++){
	        if(c[i]){
	            flag=1;
	            break;
	        }
	    }
	    if(flag){
	        cout<<"NO"<<endl;
	        
	    }
	    else cout<<"YES"<<endl;
	    
	}
	return 0;
}
