#include<bits/stdc++.h>
using namespace std;

int main(){
    int t_x;
    cin>>t_x;
    while(t_x--){
        int n,k;
        cin>>n>>k;
        string sa;
        cin>>sa;
        if(sa[0]=='0'){
            k--;
            sa[0]='1';
        }
        while(k--){
            // sa=sa+'0';
            sa.push_back('0');
        }
        cout<<sa<<endl;
    }
	return 0;
}
