#include<bits/stdc++.h>
using namespace std;
 
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    int n,m; cin>>n>>m;
    char grid[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>grid[i][j];
        }
    }
    int visited[n][m];
    memset(visited , 0, sizeof(visited));
    
    int ans = 0;
 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(visited[i][j] == 1 || grid[i][j] == '#') continue;
 
            ans++;
            queue<pair<int,int>>q;
            q.push({i,j});
            while(!q.empty()){
                pair<int,int> u = q.front();
                q.pop();
                int x = u.first;
                int y = u.second;
 
                for(int k=0; k<4; k++){
                    int r = x+dx[k];
                    int c = y+dy[k];
                    if(r>=0 and r<n and c>=0 and c < m){
                        if(grid[r][c] == '.' and visited[r][c] == 0){
                            q.push({r,c});
                            visited[r][c] = 1;
                        }
                    }
                }
            }
        }
    }
    cout<<ans;
}
