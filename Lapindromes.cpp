#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    
	    string s;
	    cin >> s;
	    int n=s.length();
	    
	    int g=n/2;
	    
	    if(n%2==0){
	         string k=s.substr(0,g);
	         sort(k.begin(),k.end());
	           string p=s.substr(g,n-1);
	         sort(p.begin(),p.end());
	         
	         if(k==p){
	             cout << "YES" << endl;
	         }
	         else{
	             cout << "NO" << endl;
	         }
	    }
	    
	    else{
	         string k=s.substr(0,g);
	         sort(k.begin(),k.end());
	           string p=s.substr(g+1,n-1);
	         sort(p.begin(),p.end());
	         
	         if(k==p){
	             cout << "YES" << endl;
	         }
	         else{
	             cout << "NO" << endl;
	         } 
	    }    
	    
	}
	return 0;
}
