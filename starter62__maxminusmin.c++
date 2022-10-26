#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int temp1 =  max(a,b);
	    temp1 = max(c,temp1);
	    int d = min(a,b);
	    d = min(c,d);
	    cout<<temp1-d<<endl;
	}
	return 0;
}
