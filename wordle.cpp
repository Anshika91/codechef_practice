#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s,a;
	    cin>>s>>a;
	    for(int i=0;i<s.length();i++){
	        if(s[i]==a[i]){
	            cout<<"G";
	        }else cout<<"B";
	    }cout<<endl;
	}
	return 0;
}
