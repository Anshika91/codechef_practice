#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int a=0;
	    vector<int> v;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    unordered_map<int, int> mp;
	    for (int i = 0; i < n; i++)
	         mp[arr[i]]++;
	    for (auto x : mp){
	        v.push_back(x.second);
	        
	    }
	    sort(v.begin(), v.end());
	    int c=v.back();
	    v.pop_back();
	    int d=v.back();
	    if(c==d)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;    
	}
	return 0;
}
