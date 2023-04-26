#include <algorithm>
#include <iostream>
using namespace std;
 

int main() {
	int N;
	cin>>N;
	while(N!=0){
	    N--;
	    int n,maxf=1,diff,c=1;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++){
	        if(arr[i]==arr[i+1]){
	            c++;         
	        }
	        else{
	            maxf=max(c,maxf);
	            c=1;
	        }
	    }
	    maxf=max(c,maxf);
	    if(n<=2){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<min(n-maxf,n-2)<<endl;
	    }
	}
	return 0;
}
