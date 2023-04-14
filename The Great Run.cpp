#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	 while(t--){
	     int n,k;
	     cin >> n >> k;
	     int arr[n];
	     int ma=0;
	     int sum=0;
	     for(int i=0; i<n; i++){
	         cin >> arr[i];
	     }
	     
	     for(int i=0; i<=n-k; i++){
	         sum=0;
	         for(int j=0; j<k; j++){
	             sum=sum+arr[j+i];
	         }
	         ma=max(ma,sum);
	     }
	     
	     cout << ma << endl;
	     
	 }
	return 0;
}
