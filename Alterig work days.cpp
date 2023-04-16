#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if(p%a==0 && q%b==0){
            if(abs(p/a - q/b) <= 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
