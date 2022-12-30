#include <iostream>
#include <string>
using namespace std;
int main() {
    int T,N,i,j;
    cin>>T;
    for(;T!=0;T--)
    {
        int n,a,x;
        cin>>N;
        string S[N+1];
        for(i=0;i<N+1;i++)
          getline(cin,S[i]);
        cout<<"Begin";
        n=S[N].length();
        if(S[N][0]=='L')
          a=4;
        else
          a=5;
        for(i=a;i<n;i++)
          cout<<S[N][i];
        cout<<endl;
        for(i=N-1;i>0;i--)
        {
            if(S[i+1][0]=='L')
              cout<<"Right";
            else
             cout<<"Left";
            if(S[i][0]=='L')
             a=4;
            else
             a=5;
            n=S[i].length();
            for(j=a;j<n;j++)
             cout<<S[i][j];
            cout<<endl;
        }
    }
	return 0;
}
