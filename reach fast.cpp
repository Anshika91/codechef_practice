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
	    int diff = abs(a-b);
	    int ans = (diff%c)?(diff/c+1):diff/c;
	    cout<<ans<<endl;
	}
	return 0;
}
