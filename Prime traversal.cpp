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
	    string a,b;
	    cin>>a>>b;
	    int one_a , one_b;
	    one_a=one_b=0;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]=='1') 
	        one_a++;
	        if(b[i]=='1')
	        one_b++;
	    }
	    if(one_a==one_b)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
