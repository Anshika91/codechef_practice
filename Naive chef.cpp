#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x,y;
	    cin >> n >> x >> y;
	    double countx=0 , county =0;
	    
	    int arr[n];
	    for ( int i=0; i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    
	    for ( int i=0; i<n;i++)
	    {
	        if ( arr[i] == x)
	        {
	            countx++;
	        }
	        
	        if ( arr[i] == y )
	        {
	            county++;
	        }
	    }    
	    double prob = (countx/n)*(county/n);
	    printf("%.10f\n",prob);
	}
	return 0;
}
