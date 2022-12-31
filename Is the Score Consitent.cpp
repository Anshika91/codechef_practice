#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(c>=a && d>=b)
	        cout<<"Possible"<<endl;
	    else
	        cout<<"Impossible"<<endl;
	    
	}
	return 0;
}
