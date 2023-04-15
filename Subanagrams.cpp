#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string first;
    cin>>first;
    for(int i=1;i<n;i++){
        string s;
        cin>>s;
        string common;
        common="";
        for(int i=0;i<first.size();i++){
            int t=0;
            for(int j=0;j<s.size();j++){
                if(first[i]==s[j] && t==0){
                    common=common+first[i];
                    s.erase(s.begin()+j,s.begin()+j+1);
                    t++;
                }
            }
        }
        first=common;
    }
    sort(first.begin(),first.end());
        if(first.size()==0){
            cout<<"no such string"<<endl;
        }
        else{
            cout<<first<<endl;
        }
}
