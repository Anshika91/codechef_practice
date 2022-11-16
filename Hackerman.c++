#include <iostream>
using namespace std;
int prime(int N)
{
    if(N<2 || (!(N&1)&&N!=2))
    return 0;
    for(int i=3; i*i<=N; i+=2)
    {
        if(!(N%i))
        return 0;
    }
    return 1;
}
void solve()
{
    int x,y;
    cin>>x>>y;
    if(prime(x+y))
    cout<<"Alice\n";
    else
    cout<<"Bob\n";
}

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    solve();
	}
	return 0;
}
