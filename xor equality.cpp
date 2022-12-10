#include <iostream>
using namespace std;
#define ll long long
ll power(ll n,ll mod)
{
    ll n1=n;
    ll res=1;
    ll a = 2;
    while(n1>0)
    {
      if(n1&1)
       res = (res*a)%mod;
       
      a = (a*a)%mod;
       n1= n1>>1;
       
    }
    return res;
}

int main() {
	// your code goes here
	const ll mod = 1000000000 +7;
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	 
	    cout<<power(n-1,mod)<<endl;
	}
	return 0;
}
