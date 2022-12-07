#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int a,b;
	    cin>>a>>b;
	    float c = (float)a;
	    float d = (float)b;
	    if((a+b)/2==(c+d)/2)
	    cout<<(a+b)/2<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
