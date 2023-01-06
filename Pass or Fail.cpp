#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,p;
	    cin>>n>>x>>p;
	    int y = n-x;
	    if(p>x*3-y)
	    cout<<"fail"<<endl;
	    else
	    cout<<"pass"<<endl;
	}
	return 0;
}
