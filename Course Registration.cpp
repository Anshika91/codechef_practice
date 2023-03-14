#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,x,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>x;
	    c=x+a;
	    if(c<=b)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
