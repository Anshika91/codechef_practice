#include <bits/stdc++.h>
using namespace std;

bool check(vector<double>&a, double val, double T)
{
    double curr = a.back() + val;
    for(int i=a.size()-2; i>=0; i--)
    {
        curr -= T;
        if(curr > a[i]+val)
            curr = a[i] + val;
        else if(curr < a[i] - val)
            return false;
    }
    if(curr >= 0)
        return true;
    return false;
}


int main() {
	int anshii; 
	cin>>anshii;
	while(anshii--)
	{
	    int n; cin>>n;
    double T; cin>>T;
    vector<double>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    double lo = 0, hi = 1000000000, res = 0;
    while((hi-lo)>1e-5)
    {
        double mid = (lo + hi)/2;
        if(check(a, mid, T))
        {
            hi = mid;
            res = mid;
        }
        else
            lo = mid;
    }
    cout<<fixed<<setprecision(4)<<res<<endl;
	}	
	return 0;
}
