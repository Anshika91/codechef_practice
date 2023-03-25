#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a+b>c){
	        cout<<"TRAIN \n";
	    }
	    else if(a+b<c){
	        cout<<"PLANEBUS\n";
	    }
	    else{
	        cout<<"EQUAL\n";
	    }
	}
	return 0;
}
