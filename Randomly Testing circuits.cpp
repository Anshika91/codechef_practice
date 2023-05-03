#include <bits/stdc++.h>
using namespace std;

int a[101],b[101],x[101];
double pr[101];


bool Binary_search_fun(double mid,int n){
    for(int i=0;i<n;i++){
        if(x[i]==0){
            pr[i]=mid;
        }
        else{
            pr[i]=(pr[a[i]-1]*pr[b[i]-1]);
            if(x[i]==1){
                pr[i]=1.0-((1-pr[a[i]-1])*(1-pr[b[i]-1]));
            }
        }
    }
    if( pr[n-1]-0.5 >= 1e-8)return true;
    else return false;
}


void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]){
            cin>>a[i]>>b[i];
        }
    }
    double l =0.0, r=1.0;
    while(r-l>1e-8){
        //using binary search
        double mid =(l+r)/2;
        if(Binary_search_fun(mid,n)){
            r=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<fixed<<setprecision(5)<<l<<endl;return;
}

int main() {
	int t;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    solve();
	}
	return 0;
}
