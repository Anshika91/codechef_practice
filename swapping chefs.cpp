#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n,f=1;
	   cin>>n;
	   string s;
	   cin>>s;
	   for (int i = 0; i < n/2; i++) 
	   {
	       if(s[i] > s[n-1-i])
	       {
	           char tmp;
	           tmp = s[i];
	           s[i] = s[n-1-i];
	           s[n-1-i] = tmp;
	       }
	   }
	   for (int i = 0; i < n-1; i++) 
	   {
	       if(s[i] > s[i+1])
	       {
	        f=0;
	        break;
	       }
	   }
	   if(f)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
	}
	return 0;
}
