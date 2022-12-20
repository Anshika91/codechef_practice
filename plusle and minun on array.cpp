#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=2){
        long long int A[n];
        long long int maxSum=0,f=0,s=0;
        for(int i=0;i<n;i++)
             cin>>A[i];
        int i=0,min=INT_MAX,max=INT_MIN;
            while(i<n){
            if(i%2==0){
                 f+=abs(A[i]);
                 if(min>=abs(A[i]))
                 min=abs(A[i]);
                
            }
            else{
                 s-=abs(A[i]);
                 if(max<=abs(A[i]))
                 max=abs(A[i]);
                
            }
             i++;  
        }
        // cout<<S<<" "<<max<<" "<<min<<endl;
        
        if(max>min)
        {
            f=f+max-min;
            s=s+max-min;
        }
        cout<<f+s<<endl;
    }
    }
	// your code goes here
	return 0;
}
