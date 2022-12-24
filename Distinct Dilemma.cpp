#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl "\n"

void solve(){
    int n;
	    cin>>n;
	    int arr[n];
	    long long sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    float f=sqrt(1+8*sum);
	    int a=(-1+floor(f))/2;
	    cout<<a<<endl;
}


int main() {
	// your code goes here
	fastio;
  int anshii;
  cin>>anshii;
  while(anshii--){
      solve();
  }
	return 0;
}
