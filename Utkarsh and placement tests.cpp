#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    char a[3], x, y;
	    
	    for (int i=0; i<3; i++) cin>>a[i];
	    cin>>x>>y;
	    
	    if (a[0] == x || a[0] == y) cout<<a[0];
	    else if (a[1] == x || a[1] == y) cout<<a[1];
	    
	    cout<<endl;
	}
	return 0;
}
