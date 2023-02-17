#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,m;
	cin>>n>>m;
	long long a[n];
	for(long long i=0;i<n;i++){
	    cin>>a[i];
	}
	long long temp=0;
	while(m--){
	    char q;
	    long long num;
	    cin>>q>>num;
	    if(q=='R'){
	        cout<<a[((temp+num-1)%n)]<<endl;
	    }
	    else if(q=='C'){
	       temp=(temp+num)%n;
	       //print(a,n);
	    }
	    else{
	        temp=(temp-num+n)%n;
	        //print(a,n);
	    }
	}
	return 0;
}
