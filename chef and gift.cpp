#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int c=0;
    
    int y = sizeof(arr)/4;
    for(int i=0;i<y;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            c+=1;
        }
    }
    if(k>c || (k==0 && c==y)){
        cout<<"NO"<<"\n";
    }
   else{
       cout<<"YES"<<"\n";
   }
}
}
