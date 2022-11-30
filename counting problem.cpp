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
	    int a[n];
	    int count=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        if(a[i]%2)
	        count++;
	    }
	    if(count==0 || count%2)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
