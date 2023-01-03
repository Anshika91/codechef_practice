#include<bits/stdc++.h>
using namespace std;
#define ll long long

void result()
{
    string s;
    cin>>s;
    if(s.size()<=3){
        cout<<"Error"<<endl;
        return;
    }
    if(s[0]!='<' || s[1]!='/' || s[s.size()-1]!='>'){
            cout<<"Error"<<endl;
            return;
        }
    for(int i=2;i<s.size()-1;i++){
        if(s[i]-'0'<0){
            cout<<"Error"<<endl;
            return;
        }
        if(s[i]-'0'>9 && s[i]-'0'<49){
            cout<<"Error"<<endl;
            return;
        }
        if(s[i]-'0'>74){
            cout<<"Error"<<endl;
            return;
        }
    }
    cout<<"Success"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        result();
    }
}
