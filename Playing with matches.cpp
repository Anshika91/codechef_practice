#include <iostream>
using namespace std;

int mat[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int main() {
	// your code goes here
	int t; cin>>t;
    while(t--)
    {
        int a, b, sum=0;
        cin>>a>>b;
        int c=a+b;
        while(c>0){
            int dig=c%10;
            sum+=mat[dig];
            c=c/10;
        }
        cout<<sum<<endl;
    }
	return 0;
}
