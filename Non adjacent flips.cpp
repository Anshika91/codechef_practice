#include<bits/stdc++.h>
using namespace std;
#define l long long int
void solve(){
l t;
cin>>t;
while(t--){
    l a;
    cin>>a;
    string s;
    cin>>s;
    l dem=0;
    l ans=0;
    for(int i=0;i<=a;i++){
        if(s[i]=='1'){dem++;}
        else{
           ans=max(ans,dem);
           dem=0;
        }
    } if(ans==0) cout<<0<<endl;
    else if(ans==1) cout<<1<<endl;
    else cout<<2<<endl;
}
}
int main(){
    solve();
}
