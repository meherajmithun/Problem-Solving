#include <bits/stdc++.h>
using namespace std;
const int N = 3005;
vector<string> grid(N);
vector<vector<int>> visited(N, vector<int>(N, 0));
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int n, m;

bool bfs(int x1, int y1, int x2, int y2) {
    queue<pair<int,int>> q;
    q.push({x1, y1});
    visited[x1][y1] = 1;

    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if(x == x2 && y == y2) return 1;

        for(int d=0; d<4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if(nx>=0 && nx<n && ny>=0 && ny<m) {
                if(!visited[nx][ny] && grid[nx][ny] == '.') {
                    visited[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    return 0;
}

int main() {
    cin >> n >> m;

    for(int i=0;i<n;i++) cin >> grid[i];

    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    if(grid[x1][y1]=='-' || grid[x2][y2]=='-') {
        cout << "NO";
        return 0;
    }

    if(bfs(x1, y1, x2, y2))
        cout << "YES";
    else
        cout << "NO";
}