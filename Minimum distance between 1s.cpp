#include <iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;


int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    stack<char>st;
	    int flag=0;
	    for(int i=0; i<n; i++)
	    {
	        if(!st.empty())
	        {
	            if(s[i]=='1'&& st.top()=='1')
	            {
	                flag=1;
	                break;
	            }
	            else if(s[i]=='0' && st.top()=='0')
	            st.pop();
	            else
	            st.push(s[i]);
	        }
	        else
	        st.push(s[i]);
	    }
	    if(flag)
	    cout<<1<<endl;
	    else
	    cout<<2<<endl;
	}
	return 0;
}
