#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    if(s[0]==s[n-1])
	    {
	        cout<<n-2<<endl;
	    }
	    else
	    {
	        cout<<2<<endl;
	    }
	}
	return 0;
}
