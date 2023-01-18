#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,m,d;
	    cin>>x>>m>>d;
	    int delay = abs(m*x - x);
	    if(delay>d)
	    {
	        cout<<x+d<<endl;
	    }
	    else
	    {
	        cout<<m*x<<endl;
	    }
	}
	return 0;
}
