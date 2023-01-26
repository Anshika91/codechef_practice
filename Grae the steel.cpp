#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    float a,b,c;
	    std::cin >> a>>b>>c;
	    if(a>50&&b<0.7&&c>5600)
	    std::cout << 10 << std::endl;
	    else if(b<0.7&&c>5600&&a<=50)
	    std::cout << 8 << std::endl;
	    else if(a>50&&b<0.7&&c<=5600)
	    std::cout << 9 << std::endl;
	    else if(a>50&&c>5600&&b>=0.7)
	    std::cout << 7 << std::endl;
	    else if((a>50&&b>=0.7&&c<=5600)||(a<=50&&b<0.7&&c<=5600)||(a<=50&&b>=0.7&&c>5600))
	    std::cout << 6 << std::endl;
	    else if(a<=50&&b>=0.7&&c<=5600)
	    std::cout << 5 << std::endl;
	}
	return 0;
}
