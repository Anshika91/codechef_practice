#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    int n, count=0,x=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	        {
	            count=0;
	            continue;
	        }
	        count++;
	        if(count==4)
	        {
	            cout<<"NO"<<endl;
	            x=1;
	            break;
	        }
	    }
	    if(x==1)
	    {
	        continue;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
