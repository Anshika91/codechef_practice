#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long> an(n), p1(n);
        long sum = 0;
        for(int i = 0; i<n; i++){
            cin>>an[i];
            sum+=an[i];
            p1[i] = sum;
        }
        long req = sum;
        for(int i=0; i<n; i++){
            req = min(max(p1[i], sum - p1[i]), req);
        }
        cout<<req<<endl;
    
    }
}
