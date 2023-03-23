
#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
	    int arr[9]={0},count=0;
	    cin>>a>>b>>c>>d;
	    for(int i=a;i<=b;i++) arr[i]++;
	    for(int i=c;i<=d;i++){
	        if(arr[i]==1) continue;
	        else arr[i]++;
	    }
	    for(int i=1;i<9;i++){
	        if(arr[i]==1) count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}
