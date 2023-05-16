#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<int,int>m;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=i+9 and j<n;j++){
                m[abs((s[i]-'0')-(s[j]-'0'))==(j-i)]++;
            }
        }
        cout<<m[1]<<endl;
    }
	// your code goes here
	return 0;
}
