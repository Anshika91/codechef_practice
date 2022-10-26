#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(b%a)
	    {
	        if(b>2*a)
	        cout<<"YES"<<endl;
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else
	        {
	            cout<<"YES"<<endl;
	        }
	}
	return 0;
}
