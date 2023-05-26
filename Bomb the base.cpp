#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n,x,t;
	int arr[100000];
	cin >>t;
	while(t--){
	    int i,idx = 0;
	    cin >> n>>x;
	    for(i=0; i<n; i++){
	        cin >> arr[i];
	        if(arr[i]<x){
	            idx = i+1;
	        }
	    }
	    cout<< idx <<endl;
	}
	return 0;
}
