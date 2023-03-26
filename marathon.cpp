#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,d,n,anshii,c;
	cin>>anshii;
	while(anshii--)
	{
	  cin>>n>>d>>a>>b>>c;
	  int r=n*d;
	  if(r>=10 && r<21)
	  cout<<a<<endl;
	  else if(r>=21 && r<42)
	  cout<<b<<endl;
	  else if(r>=42)
	  cout<<c<<endl;
	  else
	  cout<<"0"<<endl;
	}
	return 0;
}
