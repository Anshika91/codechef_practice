#include <iostream>
using namespace std;

int main() {
    int anshii;
    cin>>anshii;
    while(anshii--){
        int n;
        cin>>n;
        int arr1[n],arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i]>>arr2[i];
        }
        int a,b;
        cin>>a>>b;
        int flag =0;
        for(int i=0;i<n;i++){
            if(((arr1[i]+2)==a)&&((arr2[i]+1)==b)){
                flag = 1;
            }
            else if(((arr1[i]+2)==a)&&((arr2[i]-1)==b)){
                flag = 1;
            }
            else if(((arr1[i]-2)==a)&&((arr2[i]+1)==b)){
                flag = 1;
            }
            else if(((arr1[i]-2)==a)&&((arr2[i]-1)==b)){
                flag = 1;
            }
            
            
            
            
            else if(((arr1[i]+1)==a)&&((arr2[i]+2)==b)){
                flag = 1;
            }
            else if(((arr1[i]-1)==a)&&((arr2[i]-2)==b)){
                flag = 1;
            }
            else if(((arr1[i]+1)==a)&&((arr2[i]-2)==b)){
                flag = 1;
            }
            else if(((arr1[i]-1)==a)&&((arr2[i]+2)==b)){
                flag = 1;
            }
            
            
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
