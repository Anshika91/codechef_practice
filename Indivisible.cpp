#include <iostream>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=2; i<=100; i++)
    {
        if(n%i!=0)
        {
            if(a%i!=0)
            {
                if(b%i!=0)
                {
                    cout<<i<<endl;
                    return;
                }
            }
        }
    }
}

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii>0)
	{
	  solve();
	  anshii--;
	}
	return 0;
}
