#include <iostream>
#include<string>
using namespace std;
int ff(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='F')count++;
    }
    return count;
}
int pp(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='P')count++;
    }
    return count;
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,m;cin>>n>>m;
	    int x,y; cin>>x>>y;
	    string arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        int f=ff(arr[i]);
	        int p=pp(arr[i]);
	        if(f>=x || (f>=(x-1) && p>=y)){cout<<1;}
	        else cout<<0;
	    }cout<<"\n";
	}
	return 0;
}
