#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c=0;
	    int f=0;
	    int p=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0')
	        c++;
	        else{
	            if(f==0){
	                p=p+c/2;
	                f=1;
	            }else if(f==1)
	            p=p+(c-1)/2;
	            c=0;
	        }
	    }if(f==1)
	    p=p+c/2;
	    else
	    p=p+(c+1)/2;
cout<<p<<endl;

	}
	return 0;
}
