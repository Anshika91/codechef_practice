#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        string s;
        for(auto &x: v) cin >> x;
        set<int> st;
        for(int i = 0; i < n; ++i) {
            char c;
            cin >> c;
            if(c == '0') st.insert(v[i]);
        }
        
        cout << *st.begin() << endl;
    }
}
