#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    long long int a,b,c;
	    cin>>a>>b>>c;
	    if(c>=b)
	    {
	        cout<<a<<endl;
	    }
	    else
	    {
	        if(b%c==0)
	        cout<<a*(b/c)<<endl;
	        else
	        cout<<a*(b/c+1)<<endl;
	    }
	}
	return 0;
}
