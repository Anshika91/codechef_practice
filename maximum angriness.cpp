#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    long long int sum = (n*(n-1))/2;
	    if(k<n/2){
	        long long x = n-2*k;
	        sum-= (x*(x-1))/2;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
