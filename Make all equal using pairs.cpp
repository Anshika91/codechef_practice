#include<bits/stdc++.h> 
 using namespace std; 
    int main()  
    { int anshii; 
    cin>>anshii; 
    while(anshii--) 
    { 
         long long int n,i,x,y,k=0,co=1; 
          cin>>n; 
          int arr[n]; 
          for(i=0;i<n;i++) 
          { 
              cin>>arr[i]; 
          } 
          sort(arr,arr+n); 
          for(i=0;i<n-1;i++) 
          { 
              if(arr[i]==arr[i+1]) 
              { 
                  co+=1; 
              } 
              if(arr[i]!=arr[i+1]) 
              { 
                  co=1; 
              } 
              k=max(co,k); 
          } 
          cout<<n-k<<endl; 
     
    } 
     return 0; 
    }
