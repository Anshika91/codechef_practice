#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float x;
	    cin>>x;
	    if(x<1500)
	    {
	    float hra=0.1*x;
	    float da=0.9*x;
	    cout<<fixed<<setprecision(2)<<(x+hra+da)<<endl;
	    }
	    else
	    {
	        float hra=500;
	        float da=0.98*x;
	        cout<<fixed<<setprecision(2)<<(x+hra+da)<<endl;
	    }
	}
	return 0;
}
