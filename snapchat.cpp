#include <iostream>
using namespace std;

int main() 
{
  int T;
  cin>>T;
  while(T--)
  {
      int n;
      cin>>n;
      int A[n],B[n];
      for(int i =0;i<n;i++)
      {
          cin>>A[i];
      }
      for(int i=0; i<n; i++)
      {
          cin>>B[i];
      }
      int temp,ans;
      temp=ans=0;
      for(int i=0; i<n; i++)
      {
          if(A[i]!=0 && B[i]!=0)
          {
              temp++;
          }
          else
          {
              ans=max(ans,temp);
              temp=0;
          }
      }
      ans=max(ans,temp);
      cout<<ans<<endl;
  }
  return 0;
}
