#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ; cin >> t  ; 
	while (t--) 
	{
	    long long n , d1 =1 , d2 = 1 , out = 1 ; cin >> n ; 
	    long long gain = n - out , in = n ; 
	    long long maxx = gain ; 
	    while (gain > 0) 
	    {
	        out*=2 ; 
	        //cout << gain << " " ; 
	        gain +=  (n - out) ; 
	       // cout << gain <<  endl ;
                d1++ ; 
	        if (gain > maxx) {
	        d2++ ; 
	        maxx = gain ; 
	        }
            
	    }
	    cout << d1-1 << " " <<d2 << endl ;
	}
	return 0;
}
