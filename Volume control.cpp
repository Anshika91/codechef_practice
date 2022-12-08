#include <iostream>
using namespace std;

int main() {
	int anshii;
	cin>>anshii;
	for(int i=0;i<anshii;i++){
	    int x,y;
	    cin>>x>>y;
	    if(x>y){
	        cout<<(x-y)<<endl;
	    }
	    else{
	        cout<<(y-x)<<endl;
	    }
	}
	return 0;
}
