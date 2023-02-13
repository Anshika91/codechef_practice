#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,x,y,z;
char sai[200002];
void solve() {
  x=0;y=0;z=0;
  cin >> n >> m >> (sai+1);
  for(int i=1;i<=n;++i)
    if(sai[i]=='1') x++;
  if(x==0) {
    cout << n*m << endl;
    return;
  }
  if(x*m%2==1) {
    cout << 0 << endl;
    return;
  }
  if(m%2==0) {
    for(int i=1;i<=n;++i) {
      if(sai[i]=='1') break;
      y++;
    }
    for(int i=n;i>=1;--i) {
      if(sai[i]=='1') break;
      y++;
    }
    cout << y+1 << endl;
    return;
  }
  for(int i=1;i<=n;++i) {
    if(sai[i]=='1') z++;
    if(z==x/2) y++;
  }
  cout << y << endl;
}
signed main() {
  int anshii;
  cin >> anshii;
  while(anshii--) solve();
}
