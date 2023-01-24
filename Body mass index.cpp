#include <iostream>
using namespace std;

int main() {
	float t,m,h;
	cin>>t;
	while(t--){
	    cin>>m>>h;
	    float bmi = m/(h*h);
	    if(bmi<=18){
	        cout<<1<<endl;
	    }
	    else if(bmi>=19 && bmi<=24){
	        cout<<2<<endl;
	    }
	    else if(bmi>=25 && bmi<=29){
	        cout<<3<<endl;
	    }
	    else if(bmi>=30){
	        cout<<4<<endl;
	    }
	}
	return 0;
}
