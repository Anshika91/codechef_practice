#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
	while (T--){
	    int N, X, Y;
	    cin >> N >> X >> Y;
	    (X*Y>=N) ? cout << "YES\n" : cout << "NO\n";
	}
	return 0;
}
