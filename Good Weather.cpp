#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	   int ones=0;
    for(int i=0;i<7;i++)
    {
      int temp;
      cin>>temp;
      if(temp==1)
      {
        ones++;
      }
    }
    if(ones>=4)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
 }
	return 0;
}
