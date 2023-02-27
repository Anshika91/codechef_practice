#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    string s,st;
    cin>>s;
    set<string>sts;
    for(int i=0;i<s.length()-1;i++)
    {
        st=s.substr(i,2);
        sts.insert(st);
    }
    cout<<sts.size()<<endl;
}
	return 0;
}
