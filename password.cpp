#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int lc=0, uc=0, sc=0, d=0;
	    string s;
	    cin>>s;
	    if(s.length()<10)   cout<<"NO"<<endl;
	    else{ 
	        for(int i=0;i<s.length();i++){
	            if(s[i]>='a' && s[i]<='z')    lc++;
	            if(i>0 && i<s.length()-1){
	                if(s[i]>='a' && s[i]<='z')    lc++;
	                else if(s[i]>='A' && s[i]<='Z')   uc++;
	                else if(s[i]>='0' && s[i]<='9') d++;
	                else sc++;
	            }
	        }
	        if(lc && uc && d && sc)
	            cout<<"YES\n";
	        else cout<<"NO\n";
	    }
	}
	return 0;
}
