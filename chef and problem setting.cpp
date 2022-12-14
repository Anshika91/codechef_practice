#include <iostream>
using namespace std;

int main() {
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n,m;
	    cin>>n>>m;
	    string r;
	    for(int i=0;i<m;i++)
	    {
	        r+='1';
	    }
	    bool f1=true,f2=true;
	    string s[n],d[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i]>>d[i];
	        if(s[i]=="wrong" && d[i]==r)
	        {
	            f1=false;
	        }
	        if(s[i]=="correct" && d[i]!=r)
	        {
	            f2=false;
	        }
	        
	    }
	    if(f2==false)
	    cout<<"INVALID"<<endl;
	    if(f1==false && f2==true)
	    cout<<"WEAK"<<endl;
	    if(f1==true && f2==true)
	    {
	        cout<<"FINE"<<endl;
	    }
	}
	return 0;
}
