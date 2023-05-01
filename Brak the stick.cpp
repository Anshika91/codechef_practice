#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_cases;
	cin >> test_cases;
	for(int i=0; i<test_cases; i++){
	    int n, x;
	    cin >> n >> x;
	    if(x%2 == 0 && (n-x)%2 != 0){
	         cout << "No" << endl;
	    }else{
	         cout << "Yes" << endl;
	    }
	}
	return 0;
}
