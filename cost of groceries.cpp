#include <iostream>
#include<vector>
using namespace std;
# define ll long long

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int a,b;
	    cin>>a>>b;
	    vector<int>ab(a);
	    for(int i=0; i<a; i++)
	    {
	        cin>>ab[i];
	    }
	    vector<int>xy(a);
	    for(int i=0; i<a; i++)
	    {
	        cin>>xy[i];
	    }
	    int sum = 0;
	    for(int i=0; i<a; i++)
	    {
	         if(ab[i]>=b)
	         {
	             sum+=xy[i];
	         }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
