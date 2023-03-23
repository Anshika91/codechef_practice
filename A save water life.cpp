#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int h,x,y,c;
        cin>>h>>x>>y>>c;
        int p=(x+(y/2))*h;
        if(c>=p)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
	// your code goes here
	return 0;
}
