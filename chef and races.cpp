#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	   int x,y,a,b;
	   cin>>x>>y>>a>>b;
	   int arr[]={x,y};
	   int c=0;
	   for(int j=0;j<=1;j++)
	  {
	    if((arr[j]!=a)&&(arr[j]!=b))
	    c++;
	}
	    cout<<c<<endl;
	}
	
	return 0;
}
