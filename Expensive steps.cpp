#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n,a,b,c,d;
	    cin>>n>>a>>b>>c>>d;
	    int p = min(a,n-a+1);
	    int q=  min(b,n-b+1);
	    int r = min(c,n-c+1);
	    int s = min(d,n-d+1);
	    cout<<min(abs(c-a)+abs(d-b) , min(r,s)+min(p,q))<<endl;
	}
	return 0;
}
