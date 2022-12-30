#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    char arr[3];
	    if (360%n==0)
	    {
	        arr[0]='y';
	    }
	    else
	    {
	        arr[0]='n';
	    }
	    if (n>360)
	    {
	        arr[1]='n';
	    }
	    else
	    {
	        arr[1]='y';
	    }
	    if (n>26)
	    {
	        arr[2]='n';
	    }
	    else
	    {
	        arr[2]='y';
	    }
	    for (int i=0; i<3; i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
