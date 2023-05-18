#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m,x; cin>>n>>m>>x;                   
        vector<int>v(n);
        for(int i=0;i<v.size();i++) cin>>v[i];
        
        vector<int>vCount;                      
        int countQualf=0;                          
        for(int i=0;i<v.size();i++){
            if(v[i]>=m){                           
                countQualf++;
                vCount.push_back(i+1);
                v[i]=-1;
            }
        }
        if(countQualf>=x){                      
            cout<<countQualf<<" ";
            for(int i=0;i<vCount.size();i++) cout<<vCount[i]<<" ";
            cout<<"\n";
            continue;
        }
        
        vector<int>vSave(n);               
        for(int i=0;i<v.size();i++){      
            if(v[i]==-1){                  
                vSave[i]=0;                
                continue;
            }
            vSave[i]=v[i];
        }
        
        sort(v.begin(),v.end());            
        for(int i=v.size()-1;i>=0;i--){
            if(countQualf==x) break;
            int ele=v[i];                   
            for(int j=0;j<vSave.size();j++){ 
                if(ele==vSave[j]){
                    vCount.push_back(j+1);   
                    countQualf++;
                    break;
                }
            }                               
        }
        cout<<countQualf<<" ";              
        sort(vCount.begin(),vCount.end());
        for(int i=0;i<vCount.size();i++) cout<<vCount[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
