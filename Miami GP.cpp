#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int x,y;
	    cin>>x>>y;
	     if(y <= (x*107)/100 )
          cout<<"YES"<<endl;   
        else
            cout<<"NO"<<endl;
        
	}
	return 0;
}
