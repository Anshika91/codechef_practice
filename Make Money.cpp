#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n,x,c;
	    cin>>n>>x>>c;
	    int a[n];
	    for(int i=0; i<n; i++)
	    cin>>a[i];
	    long long int sum = 0;
	    int count = 0;
	    for(int i=0; i<n; i++)
	    {
	        if(x-a[i]>c)
	        {
	            sum+=x;
	            count+=c;
	        }
	        else
	        sum+=a[i];
	    }
	    cout<<sum-count<<endl;
	}
	return 0;
}
