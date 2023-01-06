#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int k,l,m,n;
	    cin>>k>>l;
	    if(k>=l)
	    {
	        m=(2*k)-l;
	        cout<<m<<endl;
	    }
	    else if(k<l)
	    {
	        n=k;
	        cout<<n<<endl;
	    }
	}
	return 0;
}
