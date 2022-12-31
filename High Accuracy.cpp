#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	   if(x%3==0)
	   cout<<0<<endl;
	   else if(x%3==1)
	   cout<<2<<endl;
	   else cout<<1<<endl;
	}
	return 0;
}
