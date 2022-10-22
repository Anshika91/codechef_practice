#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n,k,v;
	    cin>>n>>k>>v;
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        sum+=temp;
	    }
	    int x = ((n+k)*v)-sum;
	    if(x>0 && x%k==0)
	    {
	        cout<<x/k<<'\n';
	    }
	    else
	    {
	        cout<<"-1\n";
	    }
	}
	return 0;
}
