#include <iostream>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	ll anshii;
	cin>>anshii;
	while(anshii--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    for(ll i=0; i<n; i++)
	    cin>>a[i];
	    if(n==1)
	    {
	        if(a[0]==k)
	        cout<<"YES\n";
	        else
	        cout<<"NO\n";
	        continue;
	    }
	    int temp=1;
	    for(int i=0; i<n-1; i++)
	    if(a[i]==k)
	    {
	        temp=0;
	        break;
	    }
	    if(!temp)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
