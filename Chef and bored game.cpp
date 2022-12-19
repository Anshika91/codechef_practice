#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int anshii ;
	
	cin >> anshii ;
	
	while(anshii--)
	{
	    int n ; 
	    
	    cin >> n ;
	    
	    int a = 1 ;
	    
	    int ans = 0 ; 
	    
	    while(a <=n)
	    {
	        ans +=((n-a+1)*(n-a+1));
	        a+=2 ;
	    }
	    
	    cout << ans << endl ;
	}
	
	return 0;
}
