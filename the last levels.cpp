#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y,z,stop,total;
	    cin>>x>>y>>z;
	    if(x%3 == 0)
	    {
	    stop = ((x/3)-1)*z;
	    }
	    else
	    {
	        stop = ((x/3))*z;
	    }
	    n = x*y;
	    total = n+stop;
	    cout << total << endl;
	    
	}
	return 0;
}
