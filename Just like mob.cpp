#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(d%((a*c)+b)==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else if(d%((a*c)+b)-(a*(c-1))>0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
