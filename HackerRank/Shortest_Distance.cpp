#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll INF = 1e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<ll>> dist(n+1, vector<ll>(n+1, INF));

    for(int i = 1; i <= n; i++)
        dist[i][i] = 0;

    for(int i = 0; i < m; i++){
        int u, v;
        ll w;
        cin >> u >> v >> w;

        dist[u][v] = min(dist[u][v], w);
    }

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    int q;
    cin >> q;

    while(q--){
        int s, d;
        cin >> s >> d;

        if(dist[s][d] == INF) cout << -1 << "\n";
        else cout << dist[s][d] << "\n";
    }
}