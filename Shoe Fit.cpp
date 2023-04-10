#include <iostream>
using namespace std;

int main() {
	int t,n,c=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    c=0;
	    for(int j=0;j<3;j++)
	    {
	        cin>>n;
	        if(n==0)
	            c++;
	    }
	    if(c==0||c==3)
	        cout<<0<<endl;
	    else
	        cout<<1<<endl;
	}
	return 0;
}
