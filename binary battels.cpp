#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    int count= log2(n);
	    cout<<count*x + (count-1)*y<<endl;
	}
	return 0;
}
