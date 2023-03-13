#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	long int t,n,m,i,j,ered,ored,egreen,ogreen;
	cin>>t;
	while(t--)
	{
	    cin>>m>>n;
	    char a[m][n];
	    for(i=0;i<m;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    ered=0;
	    ored=0;
	    egreen=0;
	    ogreen=0;
	    for(i=0;i<m;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if((i+j)%2 == 0 && a[i][j] == 'R')
	            ered++;
	            else if((i+j)%2 != 0 && a[i][j] == 'R')
	            ored++;
	            else if((i+j)%2 == 0 && a[i][j] == 'G')
	            egreen++;
	            else if((i+j)%2 !=0 && a[i][j] == 'G')
	            ogreen++;
	        }
	    }
	    long int ans1=0,ans2=0;
	    ans1 = ered*5  + ogreen*3;
	    ans2 = ored*5+egreen*3;
	    cout<<min(ans1,ans2)<<endl;
	    
	}
	return 0;
}
