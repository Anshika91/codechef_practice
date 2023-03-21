#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>=b){
            b=b+c;
        }
        else {
            a=a+c;
        }
        if(a>=b){
            b=b+d;
        }
        else{
            a=a+d;
        }
        if(a>=b){
            cout<<"N"<<endl;
    }
    else{
        cout<<"S"<<endl;
    }
}
}
