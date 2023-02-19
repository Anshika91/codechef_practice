#include <iostream>
using namespace std;
long long fn(long long i){

return (i*(i-1))/2;
}


int main() {
	int anshii;
	cin>>anshii;
	while(anshii--){
		long long n;
		cin>>n;
		
		long long arr[n];
		for(long long i=0;i<n;++i) cin>>arr[i];
		
		long long res = 0; 
		res = fn(n);
		cout<<res<<endl;
	}
	// your code goes here
	return 0;
}
