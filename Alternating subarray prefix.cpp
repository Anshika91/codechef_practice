#include <bits/stdc++.h>
using namespace std;
#include<algorithm>



void solve ()

{
    int n;
    
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    int len[n];
  
   
    for(int x=n-1;x>=0;x--)
    {
        len[x]=1;
        
        for(int i=x; i<n-1;i++)
        {
            if(!((arr[i]<0 && arr[i+1]>0) || (arr[i]>0 && arr[i+1]<0)))
            {
                break;
            }
            
            len[x]=max(len[x],len[i]+1);
            if(len[x]>len[i]+1)
            {
                break;
            }
 
        }
        
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<len[i]<<" ";
    }
    cout<<"\n";
}




int main() {

	int t;
	cin>>t;
	
	while(t--) solve();
	
}
