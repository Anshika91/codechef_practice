#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
	string s,w;
	int n,q,i,j,o,l,k;
      getline(cin,s);      
    cin>>q;
       for(i=0;i<q;i++)
       {
       	o=0;
        cin>>w;
		l=w.size();  	
       	for(j=0;w[j]!='\0';j++)
       	{
       		for(k=0;s[k]!='\0';k++)
       		{
       			if(w[j]==s[k])
       			{
       				o=o+1;
       				break;
       			}
            
       		}
       	
       	}
       	if(o==l)
       	{
       		cout<<"Yes\n";
       	}
       	else
       	cout<<"No\n";
       }
}
