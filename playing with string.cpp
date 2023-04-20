#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    string r;
	    cin >> s;
	    cin >> r;
	    
    int cts=0;
    int ctr=0;
    
   cts = count(s.begin(),s.end(),'1');
	    ctr = count(r.begin(),r.end(),'1'); 
	    
	    if(cts==ctr){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
