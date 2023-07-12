#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	            count++;
	    }
	    
	    if(120-n+count>=90) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
