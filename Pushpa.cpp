#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int j=0;j<n;j++)
	    cin>>a[j];
	    sort(a,a+n);
	    if(n==1)cout<<a[0]<<"\n";
	    else{
	        long max=0;
	        long cc=0;
	        for(int i=n-1;i>=1;i--){
	            if(a[i]==a[i-1])
	            cc++;
	            else{
	                if(max<a[i]+cc){
	                    max=a[i]+cc;
	                }
	                cc=0;
	            }
	        }
	        cout<<max<<"\n";
	    }
	}
	return 0;
}
