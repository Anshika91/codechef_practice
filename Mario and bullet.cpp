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
	    if((y/x)<z)
	        cout<<abs((y/x)-z)<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
