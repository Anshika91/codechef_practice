#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin >>t;
	while(t--){
	    cin >>a>>b>>c;
	    if(a<b && a<c)
	    cout <<"Draw"<<endl;
	    else if(a==b && b==c && c==a)
	    cout <<"Draw"<<endl;
	    else if(b>c)
	    cout <<"Alice"<<endl;
	    else if(b<c)
	    cout <<"Bob"<<endl;
	}
	return 0;
}
