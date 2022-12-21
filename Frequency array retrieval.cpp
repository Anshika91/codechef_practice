#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++)
	    cin>>a[i];
	    map<int,pair<int,int>>freqArr;
	    int nextNum=1;
	    vector<int>ans;
	    for(int i=0;i<n;i++)
	    {
	        if(freqArr.find(a[i])!=freqArr.end())
	        {
	            if(freqArr[a[i]].second>0)
	            {
	                ans.push_back(freqArr[a[i]].first);
	                freqArr[a[i]].second--;
	                if(freqArr[a[i]].second == 0)
	                freqArr.erase(a[i]);
	            }
	        }
	            else
	            {
	                freqArr[a[i]]={nextNum, a[i]-1};
	                if(freqArr[a[i]].second==0)
	                freqArr.erase(a[i]);
	                ans.push_back(nextNum);
	                nextNum++;
	            }
	        }
	        bool flag=1;
	        for(auto i: freqArr)
	        {
	            if(i.second.second>0)
	            {
	                flag=0;
	                break;
	            }
	        }
	        if(flag==0)
	        cout<<-1;
	        else
	        {
	            for(auto i: ans)
	            cout<<i<<" ";
	        }
	        cout<<endl;
	}
	return 0;
}

