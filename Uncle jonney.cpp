#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findUncleJohnyPosition(vector<int> playlist, int n, int k) {
    int uncleJohnyLength = playlist[k-1]; 
    sort(playlist.begin(), playlist.end()); 
    for (int i = 0; i < n; i++) {
        if (playlist[i] == uncleJohnyLength) {
            return i+1; 
        }
    }
    return -1; 
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        vector<int> playlist(n);
        for (int i = 0; i < n; i++) {
            cin >> playlist[i];
        }
        cin >> k;
        int uncleJohnyPosition = findUncleJohnyPosition(playlist, n, k);
        cout << uncleJohnyPosition << endl;
    }
    return 0;
}
