#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int ans=0;
        for(int i=0;i<s1.length();i++){
            for(int j=0;j<s2.length();j++){
                if(s1[i]==s2[j]){
                    ans++;
                    s2[j]=0;
                }
            }
        }
        cout<<ans<<endl;
    }
}
