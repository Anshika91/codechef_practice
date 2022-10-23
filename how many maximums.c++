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
	    if(n==2 || n==1)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    int co=0;
	    for(int i=0; i<n-2; i++)
	    {
	        if(s[i]==48 && s[i+1]==49)
	        {
	            co++;
	        }
	    }
	    if(s[0]==49)
	    {
	        co++;
	    }
	    if(s[n-2]==48)
	    {
	        co++;
	    }
	    cout<<co<<endl;
	}
	return 0;
}
