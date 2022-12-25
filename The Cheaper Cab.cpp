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
	    if(x<y)
	    cout<<"First"<<endl;
	    else if(x>y)
	    cout<<"Second"<<endl;
	    else
	    cout<<"Any"<<endl;
	}
	return 0;
}
