#include<bits/stdc++.h>
using namespace std;


void f(){
	int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   int ans = 0;
   int start = a[0];
   
   for(int i=0;i<n;i++){
       if(start<a[i])
       ans = max(a[i]-start,ans);
       else
       start = a[i];
   }
   
   if(ans)
   cout<<ans<<endl;
   else
   cout<<"UNFIT"<<endl;
}



int main(){

	int t;
	cin>>t;
	while(t--){
		f();
	}

	return 0;
}
