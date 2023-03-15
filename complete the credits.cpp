#include <iostream>
using namespace std;
int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int x;
	       cin>>x;
	       if(x>65)
	       {
	           cout<<"overload"<<endl;
	       }
	       else if(x<35)
	       {
	           cout<<"underload"<<endl;
	       }
	       else
	       {
	           cout<<"normal"<<endl;
	       }	       
	   }
	return 0;
}
