#include<bits/stdc++.h>
using namespace std;
int main()
{
    int anshii;
    cin>>anshii;
    while(anshii--)
    {
        int n,i;
        cin>>n;
        string s,u;
        cin>>s;
        cin>>u;
        int m=0;
        for(i=0;i<=n-1;i++)
        {
         if(s[i]==u[i])
         m++;
         else if(u[i]=='N')
         {
            m+=0;
         }
         else if(u[i]!=s[i])
         {
            m+=0;
            if(i<n-1)
            {
                i++;
            }
         }
        }
        cout<<m<<"\n";
}
return 0;
}
