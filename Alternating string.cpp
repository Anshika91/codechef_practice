#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	     int cnt0 = 0, cnt1 = 0;
	    for(int i = 0; i < n; i++) {
	        if(s[i] == '0')
	        cnt0++;
	        else
	        cnt1++;
	    }
	    if(cnt0 == n || cnt1 == 0 || cnt1== n||cnt0== 0)
	    cout << 1 << "\n";
	    else if(cnt0 == cnt1)
	    cout << 2*min(cnt0, cnt1) << "\n";
	    else
	    cout << 2*min(cnt0, cnt1)+1 << "\n";
	    
	}
	return 0;
}
