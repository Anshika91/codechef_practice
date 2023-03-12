#include <iostream>
using namespace std;
long long solve(){
    long long n,x,a;
    cin>>n>>x;
    long long oddc, evenc; oddc=evenc=0;
    for(int i=0; i<n; i++) {
        cin>>a;
        if(a % 2) oddc++;
        else evenc++;
    }

    if (oddc == n) {
        return 0;
    }
    // A is only evens
    if (evenc == n) {

        if (x % 2)
            return (n + 1) / 2;

        return -1;
    }

    if (x % 2)
        return (evenc + 1) / 2;
    return evenc;
}
int main() {
	int tt;
	cin>>tt;
	while(tt--) {
	    cout<<solve()<<'\n';
	}
	return 0;
}
