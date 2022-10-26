#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n,a;
	    cin>>n>>a;
	    int x[n];
	    long long int sum=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>x[i];
	    }
	    for(int i=0; i<n; i++)
	    sum = sum+x[i];
	    int y[a][2];
	    for(int i=0; i<a; i++)
	    {
	        cin>>y[i][0];
	        cin>>y[i][1];
	    }
	    
	    for(int i=0; i<a; i++)
	    {
	        int temp = y[i][1]-y[i][0];
	        temp++;
	        if(temp%2==0)
	        continue;
	        else
	        sum++;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
