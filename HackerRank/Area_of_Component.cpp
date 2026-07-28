#include<bits/stdc++.h>
using namespace std;
const int N = 3005;
vector<string>g(N);
vector<vector<int>>visited(N, vector<int>(N, 0));

int dx[] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int n,m;

int bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i, j});
    visited[i][j] = 1;

    int ans = 0;

    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();
        ans++;
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!visited[nx][ny] && g[nx][ny] == '.') {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
    return ans;
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>g[i];
    }
    int ans = INT_MAX;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(g[i][j]=='.' && !visited[i][j]){
                int area = bfs(i,j);
                ans = min(ans,area);
            }
        }
    }
    if(ans == INT_MAX){
        cout<<-1;
    }
    else cout<<ans;

}