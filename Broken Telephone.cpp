#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int hash[n]={0};
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]!=a[i+1])
	        {
	            hash[i]++;
	            hash[i+1]++;
	        }
	        if(hash[i])
	        {
	            count++;
	        }
	    }
	    if(hash[n-1])
	    {
	        count++;
	    }
    cout<<count<<endl;
	    	    
	}
	return 0;
}
