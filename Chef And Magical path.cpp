#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	long long x,y;
	cin>>x>>y;
	if((x%2!=0 && y%2!=0) || (x==1 && y!=2) || (y==1 && x!=2)){
	    cout<<"No"<<endl;
	}

	else{
	    cout<<"Yes"<<endl;
	}
	}	
	return 0;
}
