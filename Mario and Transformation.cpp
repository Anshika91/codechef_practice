#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int x;
	    cin>>x;
	    if(x%3==0)
	    {
	        cout<<"Normal"<<endl;
	    }
	    else if((x+1)%3==0)
	    {
	        cout<<"Small"<<endl;
	    }
	    else if((x-1)%3==0)
	    {
	        cout<<"Huge"<<endl;
	    }
	}
	return 0;
}
