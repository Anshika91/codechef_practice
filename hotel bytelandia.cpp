#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while (anshii--) {
	    int n;
	    cin >> n;
	    int arr[1000] = {0};
	    for (int i = 0; i < n; i++) {
	        int arrival;
	        cin >> arrival;
	        arr[arrival - 1]++;
	    }
	    for (int i = 0; i < n; i++) {
	        int departure;
	        cin >> departure;
	        arr[departure - 1]--;
	    }
	    int max = arr[0];
	    for (int i = 1; i < 1000; i++) {
	        arr[i] += arr[i-1];
	        max = (arr[i] > max) ? arr[i] : max;
	    }
	    cout << max << endl;
	}
	return 0;
}
