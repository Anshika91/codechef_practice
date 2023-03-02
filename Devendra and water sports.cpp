#include <iostream>
using namespace std;

int main() {
	int t,z,y,a,b,c;
	std::cin >> t;
	while(t--){
	    std::cin >> z>>y>>a>>b>>c;
	    if((z-y)>=(a+b+c)){
	        std::cout << "YES" << std::endl;
	    }
	    else{
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
