#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int anshii;cin>>anshii;while(anshii--){
	    int n;cin>>n;
	    char s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    int f=0;
	    for(int i=1;i<n;i++){
	        if(s[i]=='L'&&s[i-1]=='L'){
	        f=1;
	        break;
	        }
	        if(s[i]=='R'&&s[i-1]=='R'){
	        f=1;
	        break;
	        }
	    }
	    if(f==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
