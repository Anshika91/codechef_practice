#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,X;
	cin >> a ;
	for (int T=1;T<=a;T++)
	{
	    cin>>X;
	    if(X>=80){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
