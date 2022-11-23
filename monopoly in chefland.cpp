#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x+y)<z||(y+z)<x||(x+z)<y)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
