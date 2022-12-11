#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    
    ll t;
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
        ll n,k;
        cin>>n>>k;
        ll as=0;
        ll bs=0;
        ll ar[n];
        std::vector<ll> a;
        std::vector<ll> b;
        
        for(ll j=0;j<n;j++){
            cin>>ar[j];
            
            if(j&1){
                b.push_back(ar[j]);
                bs+=ar[j];
            }
            else{
                a.push_back(ar[j]);
                as+=ar[j];
            }
        }
        int flag=0;
        ll al=a.size();
        ll bl=b.size();
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        if(bs>as){
            cout<<"YES"<<endl;
        }
        else {
            ll temp=k;
            ll c=0;
            //cout<<"before:"<<as<<" "<<bs<<" "<<endl;
            while(temp>0 && c<al && c<bl){
                ll sub=a[al-c-1]-b[c];
                
                as-=sub;
                bs+=sub;
                //cout<<a[al-c-1]<<" "<<b[c]<<" "<<sub<<" "<<as<<" "<<bs<<endl;
                if(bs>as){
                    flag=1;
                    break;
                }
                c++;
                temp--;
            }
            if(flag==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
    }
}
