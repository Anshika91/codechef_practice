#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int anshii;
    cin>>anshii;
    while(anshii--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        sort(a,a+n);
        if(x==n)
        cout<<0<<endl;
        else
        cout<<a[n-x]-1<<endl;
    }
    
	return 0;
}
