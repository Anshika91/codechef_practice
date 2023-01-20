#include <iostream>
using namespace std;

int main()
{
    int count,t,n,temp;
    cin>>t;
    while(t--)
    {
    count=0;
    cin>>n;
    int arr1[n],arr2[n];
    temp=n;
    while(temp--) cin>>arr1[temp];
    temp=n;
    while(temp--) cin>>arr2[temp];
    temp=n;
    // return 0;
    while(temp--)
    {
        if(arr1[temp]==arr2[temp]) count++;
        
    }
        cout<<count<<endl;
    
    }
}
