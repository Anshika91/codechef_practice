#include <iostream>
using namespace std;

int main() {
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n,x;
	    cin>>n>>x;
	    if(n%2==0)
	    {
	        for(int i=1;i<=n/2;i++)
	        {
	            cout<<x-i<<" "<<x+i<<" ";
	        }
	        
	    }
	    else
	    {
	        cout<<x<<" ";
	        for(int i=1;i<=n/2;i++)
	        {
	            cout<<x-i<<" "<<x+i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
