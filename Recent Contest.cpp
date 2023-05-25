#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count1=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        string code;
	        cin>>code;
	        if(code=="START38")
	       {
	           count1++;
	       } 
	    }
	    cout<<count1<<" "<<(n-count1)<<endl;
	}
	return 0;
}
