#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll anshii;
    cin>>anshii;
    while(anshii--)
    {
        ll n,m;
        cin>>n;
        ll v[n];
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v,v+n);
        m=v[1]-v[0];
        for(ll i=2;i<n;i++)
        {
            if(v[i]-v[i-1]<m)
                m=v[i]-v[i-1];
        }
        cout<<m<<endl;
    }
    return 0;
}
