#include <bits/stdc++.h>
using namespace std;

int main()
{
    int anshii; 
    cin>>anshii;
    while(anshii--)
    {
        long long int a,ct=0;
        cin>>a;
        int arr[a];
        for(int i=0; i<a; i++){
            cin>>arr[i];
            if(arr[i]==0) {ct++;}
        }
        cout<<max(ct,a-ct)<<endl;
    }
}
