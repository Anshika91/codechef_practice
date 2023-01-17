#include <iostream>
using namespace std;

int main() {
	// your code goes here
        char a,b;
       cin>>a>>b;
       
        if(a==b) 
        cout<<a<<endl;
        else if(a=='G' && b =='B' || a=='B' && b=='G')
        cout<<"B"<<endl;
        else if(a=='R' && b=='B' || a=='B' && b == 'R')
        cout<<"R"<<endl;
        else if(a=='G' && b=='R' || a=='R' && b=='G')
        cout<<"R"<<endl;
        
	return 0;
}
