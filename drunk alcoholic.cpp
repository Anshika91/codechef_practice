#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int K;
	    cin>>K;
	    if(K % 2 ==0)
	    {
	        cout<<K<<endl;
	    }
	    else
	    {
	        cout<<K+2<<endl;
	    }
	}
	return 0;
}
