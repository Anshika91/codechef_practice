#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int anshii;
	cin>>anshii;
	
	while(anshii--)
	{
	    long long int arr[3];
	    int color=0;
	    
	    for(int i=0;i<3;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+3);
	    
	    for(int i=0;i<3;i++)
	    {
	        if(arr[i]!=0)
	         color++;
	    }
	    
	    if(arr[0]==2)
	    {
	        if(arr[2]>=3)
	         color+=2;
	        else
	         color+=1;
	    }
	    else if(arr[0]>=3)
	    {
	        color+=3;
	    }
	    else
	    {
	        if(arr[1]<=1)
	         color=color;
	        else
	         color+=1;
	    }
	    
	   cout<<color<<endl;
	}
	return 0;
}
