#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int power=0;
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    for(int i=0;i<s.length();i++)
	        power+=(i+1)*(s[i]-96);
	        
	   cout<<power<<endl;
	}
	return 0;
}
