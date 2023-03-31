#include <iostream>
using namespace std;

int sum(int x) {
    return (x*(x+1))/2;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int d, n;
	    cin>>d>>n;
	    
	    while(d--) n = sum(n);
	    cout<< n <<endl;
	}
	return 0;
}
