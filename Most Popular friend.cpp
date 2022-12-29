#include <bits/stdc++.h>
using namespace std;
#define int long long int
typedef vector<vector <int>> graph;

int32_t main()
{
     

    int t, n, i, x, k, ans, pans, mem, a, b, c, j;
    cin >> t;
    while(t--)
    {
        cin >> n;
        graph g(n + 1);
        ans = 1000000000;
        for(i = 1; i <= n; i++)
            do
            {
                cin >> x;
                g[i].push_back(x);
            }
            while(cin.peek() != '\n' && cin.peek() != EOF);
        for(i = 1; i <= n; i++)
        {
            queue <int> q;
            vector <int> vis(n + 1);
            pans = 0;
            k = 0;
            q.push(i);
            vis[i] = 1;
            c = 1;
            while(!q.empty())
            {
                k++;
                while(c--)
                {
                    a = q.front();
                    b = g[a].size();
                    x = 0;
                    for(j = 0; j < b; j++)
                    {
                        if(!vis[g[a][j]])
                        {
                            q.push(g[a][j]);
                            vis[g[a][j]] = 1;
                            x++;
                        }
                    }
                    pans += k*x;
                    q.pop();
                }
                c = q.size();
            }
            if(pans < ans)
                {
                    ans = pans;
                    mem = i;
                }
        }
        double z = ans * 1.0 /n;
        cout << mem << " " << fixed << setprecision(6) << z <<endl;
    }
    return 0;
}
