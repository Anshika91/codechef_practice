#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t=0;
	cin>>t;	
	while(t--){
	    int n;
	    cin>>n;	    
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        //cin>>b[i];
	    }
	    for(int i=0;i<n;i++){	       
	        cin>>b[i];
	    }
	   	    
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(i==0 && (a[i]>=b[i])){
                count++;
            }
            else if (a[i]-a[i-1]>=b[i])
            {
                count++;
            }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
