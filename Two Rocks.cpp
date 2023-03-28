#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d,t;
	cin>>t;
	while(t--)
	{
	  cin>>a>>b>>c>>d;
	  if((a==c&&b!=d)||(a!=c&&b==d))
	  cout<<"yes"<<endl;
	  else
	  cout<<"no"<<endl;
	}
	return 0;
}
