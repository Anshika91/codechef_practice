#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int ans=0;
	    for(int i=1; i<n;i++)
	    {
	        if(s[i]=='0' && s[i-1]=='1')
	        ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
