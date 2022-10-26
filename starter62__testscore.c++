#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    if(b%a==0)
	    {
	        if(n>=b/a)
	        cout<<"YES"<<endl;
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	    else
	        {
	            cout<<"NO"<<endl;
	        }
	}
	return 0;
}
