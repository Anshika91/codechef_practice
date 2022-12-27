#include <iostream>
using namespace std;
#define int long long

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	    int i,n,j,sum=0,ma=0;
	    int ar[3][3],ar1[6];
	    for(i=0;i<3;i++)
	    for(j=0;j<3;j++)
	    cin>>ar[i][j];
	    for(i=0;i<3;i++)
	    {
	        for(j=0;j<3;j++)
	        {
	            sum=sum+ar[i][j];
	        }
	        ar1[i]=sum;
	        sum=0;
	    }
	    for(i=0;i<3;i++)
	    {
	        for(j=0;j<3;j++)
	        {
	            sum=sum+ar[j][i];
	        }
	        ar1[i+3]=sum;
	        sum=0;
	    }
	    for(i=0;i<6;i++)
	    ma=max(ma,ar1[i]);
	    if(ma==0)
	    cout<<"0"<<"\n";
	    else if(ma%2!=1)
	    cout<<ma-1<<"\n";
	    else
	    cout<<ma<<"\n";
	}
	return 0;
}
