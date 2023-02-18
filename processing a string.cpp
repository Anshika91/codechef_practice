#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, sum;
	string s;
	cin >> t;
	while (t--) {
	    sum = 0;
	    cin >> s;
	    for (auto &c: s) {
	        if (c >= '0' && c <= '9') sum += c - '0';
	    }
	    cout << sum << '\n';
	}
	return 0;
}
