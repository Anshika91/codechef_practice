#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >> t;
	while(t--){
	    
	    int price[26];
	    for(int i=0; i<26; i++){
	        cin >> price[i];
	    }
	    string s;
	    cin >> s;
	    
	    int c=0;
	    
	    for(int i='a'; i<='z'; i++){
	        bool f=false;
	        for(int j=0; j<s.length(); j++){
	            if(i==s[j]){
	               f=true; 
	            }
	        }
	        if(f==false){
	            c += price[i-97];
	        }
	    }
	    
	    cout << c << endl;
	    
	}
	return 0;
}
