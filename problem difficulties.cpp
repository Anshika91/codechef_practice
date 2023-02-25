#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[4];
	    for(int i=0; i<4; i++) cin>>a[i];
	    sort(a,a+4);
	    int count=0;
	    for(int i=0; i<3; i++){
	        if(a[i]==a[i+1]){count++;}
	    }
	    if(count==0||count==1){cout<<2<<endl;}
	    else if(count==3){cout<<0<<endl;}
	    else{
	        if(a[1]==a[2]){cout<<1<<endl;}
	        else{cout<<2<<endl;}
	    }
	}
	return 0;
}
