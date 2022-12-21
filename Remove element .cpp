#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    long a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    if(n==1)
	    {
	        cout<<"YES"<<endl;
	        continue;
	    }
	    
	    sort(a,a+n);
	    
	    int i=0,j=n-1;
	    
	    int f=0;
	    
	    if(k >= a[0]+a[n-1])
	    {
	        cout<<"YES"<<endl;
	    }
	    
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
