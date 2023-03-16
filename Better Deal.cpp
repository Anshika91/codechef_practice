#include <iostream>
using namespace std;

int main() {
    int t; cin>>t; while(t--){
        int A,B; cin>>A>>B;
        int x= 100- A;
        int y= 200 -(B*2);
        if(x>y){
            cout<<"SECOND"<<endl;
        }
        else if(x==y){
            cout<<"BOTH"<<endl;
        }
        else{
            cout<<"FIRST"<<endl;
        }
    }
	// your code goes here
	return 0;
}
