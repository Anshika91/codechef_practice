#include<bits/stdc++.h>
using namespace std;

#define ll long long   

 
 
int main(){
 ios_base::sync_with_stdio(false);
 ll t=1;
 cin>>t;
 while(t--){
  int n,x,y;
  cin>>n>>x>>y;
  int df1 = abs(x-(n+1)/2);
  int df2 = abs(y-(n+1)/2);
  if(abs(df1-df2)%2 == 0) cout<<"0\n";
  else cout<<"1\n";
 }
}
