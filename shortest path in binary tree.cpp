#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{  
  int u,v;
  cin>>u>>v;
  int x=u;
  int y=v;
  map<int,bool>mp;
  while(u)
  {
    mp[u]=true;
    u/=2;
  }
  int d=0,k=-1;
  while(v)
  {
    if(mp[v])
    {
        k=v;
        break;
    }
    v/=2;
    d++;
  }
  while(x)
  {
      if(x==k)
      break;
      d++;
      x/=2;
  }
  cout<<d<<endl;
}
int32_t main() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {    
        solve();
    }
return 0;  
}
