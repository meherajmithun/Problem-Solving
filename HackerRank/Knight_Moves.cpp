#include <bits/stdc++.h>
using namespace std;
const int N = 3005;
int dx[8] = {-2,-2,-1,-1,1,1,2,2};
int dy[8] = {-1,1,-2,2,-2,2,-1,1};
int n, m;

void solve(){
    cin >> n >> m;
    int kx, ky;
    cin >> kx >> ky;
    int qx, qy;
    cin >> qx >> qy;
    queue<pair<int,int>> q;

    vector<vector<int>> dist(n, vector<int>(m, -1));
    q.push({kx, ky});
    dist[kx][ky] = 0;
    int ans = -1;
    while(!q.empty()) {
        auto [x, y] = q.front(); q.pop();

        for(int d=0; d<8; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if(nx>=0 && nx<n && ny>=0 && ny<m && dist[nx][ny]==-1) {
                dist[nx][ny] = dist[x][y]+1;
                q.push({nx, ny});
            }
        }
    }

    cout<<dist[qx][qy]<<'\n';


}

int main() {
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}