#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a[10];
	    int p1=0,p2=0;
	    for(int i=0;i<10;i++)
	    cin >> a[i];
	    for(int i=0;i<10;i=i+2)
	    {
	        if(a[i] == 1)
	        p1++;
	    }
	    for(int i=1;i<10 ;i=i+2)
	    {
	        if(a[i] ==1)
	        p2++;
	    }
	    if(p1==p2)
	    cout <<"0" << endl;
	    else if(p1 > p2)
	    cout <<"1"<< endl;
	    else
	    cout <<"2"<< endl;
	}
	return 0;
}
