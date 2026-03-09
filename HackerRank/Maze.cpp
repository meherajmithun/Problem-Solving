#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 0, -1, 1}; // Right, Left, Up, Down
int dy[4] = {1, -1, 0, 0};

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> maze(n);
    pair<int,int> R, D;
    
    for(int i=0;i<n;i++){
        cin >> maze[i];
        for(int j=0;j<m;j++){
            if(maze[i][j]=='R') R={i,j};
            if(maze[i][j]=='D') D={i,j};
        }
    }
    
    vector<vector<pair<int,int>>> parent(n, vector<pair<int,int>>(m, {-1,-1}));
    vector<vector<bool>> visited(n, vector<bool>(m,false));
    queue<pair<int,int>> q;
    
    q.push(R);
    visited[R.first][R.second] = true;
    bool found = false;
    
    while(!q.empty() && !found){
        auto [x, y] = q.front(); q.pop();
        for(int d=0; d<4; d++){
            int nx = x + dx[d];
            int ny = y + dy[d];
            if(nx>=0 && nx<n && ny>=0 && ny<m && !visited[nx][ny]){
                if(maze[nx][ny]=='.' || maze[nx][ny]=='D'){
                    visited[nx][ny] = true;
                    parent[nx][ny] = {x, y};
                    q.push({nx, ny});
                    if(nx==D.first && ny==D.second){
                        found = true;
                        break;
                    }
                }
            }
        }
    }
    
    if(found){
        pair<int,int> cur = D;
        while(cur != R){
            auto p = parent[cur.first][cur.second];
            if(p != R) maze[p.first][p.second] = 'X';
            cur = p;
        }
    }
    
    for(int i=0;i<n;i++) cout << maze[i] << "\n";
}