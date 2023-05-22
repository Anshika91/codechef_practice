#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    bool flag =false;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i+1]-arr[i]!=1)
	        {
	            flag=true;
	            cout<<1<<endl;
	            break;
	        }
	    }
	    if(flag==false) cout<<n<<endl;
	    
	    
	}
	return 0;
}
