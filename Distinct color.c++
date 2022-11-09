#include <iostream>
#include<climits>
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
	    int max=INT_MIN;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        if(a[i]>max)
	        max=a[i];
	    }
	    cout<<max<<endl;
	}
	return 0;
}
