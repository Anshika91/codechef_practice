#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ll t;
  cin>>t;
  while(t--){
      ll n,m;
      cin>>n>>m;
      int a[n];
      for(ll i=0;i<n;i++){
          ll y;
          cin>>y;
          a[i]=y;
      }
      sort(a,a+n,greater<int>());
      ll max=0;
      while(m>0){
          m=m-a[max];
          max++;
      }
      cout<<(n-max)<<endl;
  }
}
