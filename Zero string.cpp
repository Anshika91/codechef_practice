#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int cnt0=0,cnt1=0;
	    cnt0= count(s.begin(),s.end(), '0');
	    cnt1= count(s.begin(),s.end(), '1');
	    if(cnt0==n)
	    cout<<0<<endl;
	    else if(cnt1==n)
	    cout<<1<<endl;
	    else if(cnt1>cnt0)
	    cout<<cnt0+1<<endl;
	    else if(cnt0>=cnt1)
	    cout<<cnt1<<endl;
	}
	return 0;
}
