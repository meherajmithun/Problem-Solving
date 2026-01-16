//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<pair<int, int>> vp;
    int visited[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        queue<int> q;
        q.push(i);
        visited[i] = 1;
        if (i != 1)
            vp.push_back({i - 1, i});
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (auto v : adj[u])
            {
                if (visited[v])
                    continue;
                q.push(v);
                visited[v] = 1;
            }
        }
    }
    print(vp.size());
    for (auto u : vp)
    {
        cout << u.first << " " << u.second << '\n';
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1; // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}