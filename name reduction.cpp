#include <bits/stdc++.h>
using namespace std;

int main() {
 
int anshii;
cin>>anshii;
 while(anshii--){
     string a,b;
     int flag =0; 
     map<char,int>mp; 
     cin>>a>>b;
   
     string p ="";
     int n;
     cin>>n;
    
     while(n--){
         string g;
         cin>>g;
         p+=g;
     }
       string t=a+b;
     for(int i=0;i<t.length();i++){
	        mp[t[i]]++;
	    }
	    for(int i=0;i<p.length();i++){
	        mp[p[i]]--;
	    }
	    for(auto it=mp.begin();it!=mp.end();it++){
	        if(it->second<0){
	            flag=1;
	        }
	    }
	    if(flag==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
    
     
 }
	return 0;
}
