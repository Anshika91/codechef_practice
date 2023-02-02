#include <iostream>
using namespace std;

int main() {
	// your code goes here
	unsigned long t,a,b,c;
    cin>>t;
	while(t--)
	{
	    cin>>a;
        cin>>b;
        cin>>c;
	   unsigned long sum1 = a+b;
	   unsigned long sum2 = b+c;
	   unsigned long sum3 = c+a;
	    
        
	    unsigned long maxsum = sum1>sum2?(sum1>sum3?sum1:sum3):(sum2>sum3?sum2:sum3);
	    cout<<maxsum<<endl;
	}
	return 0;
}
