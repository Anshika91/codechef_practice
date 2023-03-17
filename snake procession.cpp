#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
  int r;
  cin>>r;
  while(r--){
      int l,i=0,check=0;
      cin>>l;
      string s;
      cin>>s;
      for(auto t:s){
          if (t=='H'){
             
              i+=1;
              if(i>1){
                  cout<<"Invalid"<<endl;
                  check++;
                  break;
              }
          }
          else if(t=='T'){
         
              i-=1;
              if(i<0){
                  cout<<"Invalid"<<endl;
                  check++;
                  break;
              }
              
          }
          
      }
      
      if( i==0 && check==0)cout<<"Valid"<<endl;//introducinng check variable so that if a cout command has been operated before , these cout do not function
     else if( check==0 ) cout<<"Invalid"<<endl;
  }
  
  return 0;
}
