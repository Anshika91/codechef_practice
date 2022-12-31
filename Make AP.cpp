#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,c;
	    cin>>a>>c;
	    float d = float(a);
	    float e = float(c);
	    if((a+c)/2 == (d+e)/2)
	    cout<<(a+c)/2<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
