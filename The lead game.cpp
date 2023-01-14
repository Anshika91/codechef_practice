#include <iostream>
using namespace std;

int main() {
	
	int n;  // number of rounds
	cin>>n;
    int s1=0,s2=0; //commulative score of player1 and 2 initially taken as 0.
    int W=0;  //w->winner
    int L=0;  // L->lead
	while(n--){
	    int p1,p2;  //particular round score
	    cin>>p1>>p2;
	    
	    s1+=p1;    
	    s2+=p2;
	    
	    int cl=abs(s1-s2) ; 
	    if(cl>L){
	        L=cl; 
	        s1>s2? W=1:W=2; 
	    }
	}
	cout<<W<<" "<<L<<endl;
	return 0;
}
