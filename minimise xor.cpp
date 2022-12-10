#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    string a,b;
	    cin>>a>>b;
	   // string str;
	    int zero,one;
	    zero=one=0;
	    for(int i=0;i<a.length();i++)
	    {
	        if(a[i]=='0')
	        zero++;
	        else
	        one++;
	        if(b[i]=='0')
	        zero++;
	        else
	        one++;
	    }
	    int temp=min(zero,one);
	    string ans="";
	    for(int i=0; i<temp; i++)
	    ans+='1';
	    for(int i=temp; i<a.length(); i++)
	    ans+='0';
	    cout<<ans<<endl;
	    
	}
	return 0;
}
