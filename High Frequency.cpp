#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<int, std::greater<int>> s;

    map<int, int> m;
    int temp;
    int maxFreq = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        m[temp]++;
        maxFreq = max(maxFreq, m[temp]);
    }

    // find if more than one element has max frequency
    int counter = 0;
    for (std::map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        if (it->second == maxFreq)
        {
            counter++;
        }
        s.insert(it->second);
        // cout << ">> " << it->first << " " << it->second << endl;
    }
    // cout << "counter: " << counter << endl;

    if (counter > 1)
    {
        cout << maxFreq << endl;
    }
    else
    {
        s.erase(maxFreq);
        s.insert(maxFreq - maxFreq / 2);
        cout << *s.begin() << endl;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
