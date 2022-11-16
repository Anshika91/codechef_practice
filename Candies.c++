#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n;
	    cin>>n;
	    int a[2*n];
	    for(int i=0; i<2*n; i++)
	        cin>>a[i];
	        map<int, int>mp;
	        for(int i=0; i<2*n; i++)
	        mp[a[i]]++;
	        int flag=0;
	        for(auto it:mp)
	        {
	            if(it.second>=3)
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag)
	        cout<<"NO"<<endl;
	        else
	        cout<<"YES"<<endl;
	}
	return 0;
}
