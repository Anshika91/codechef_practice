#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii,x,y,z;
	cin>>anshii;
	while(anshii--){
	    cin>>x>>y>>z;
	    if(z>=x+y){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
