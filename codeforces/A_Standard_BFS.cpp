#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> visited, level;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);
    visited.resize(n + 1, 0);
    level.resize(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int src = 1;
    set<int>st;
    visited[src] = 1;
    level[src] = 0;
    st.insert(src);
    vector<int>ans;
    while (!st.empty()) {
        int u = *(st.begin()); st.erase(st.begin());
        ans.push_back(u);

        for (auto v : adj[u]) {
            if (visited[v]) continue;
            
            st.insert(v);
            visited[v] = 1;
            level[v] = level[u] + 1;
        }
    }
    // for(int i=1; i<=n; i++){
    //     cout<<i<<" -> ";
    //     for(auto u : adj[i]){
    //         cout<<u<<" ";
    //     }
    //     cout<<endl;
    // }
    for(auto u : ans) cout<<u<<" ";
}