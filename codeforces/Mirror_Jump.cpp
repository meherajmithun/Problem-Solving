#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> visited, level;

void solve(){
    int n,k; cin>>n>>k;
    //level[k] = 0;
    level.resize(n + 1, 0);

    queue<int> q;
    level[k] = 0;
    q.push(k);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        if(u == n) {
            cout<<level[u]<<endl;
            level.clear();
            return;
        }
        if (u>1 and level[k-1]==0) {
            level[u-1] = level[u] + 1;
            q.push(u-1);
        }
        if (u<n and level[u+1] == 0) {
            level[u+1] = level[u] + 1;
            q.push(u+1);
        }
        int tmp = n+1-u;
        if (level[tmp] == 0) {
            level[tmp] = level[u] + 1;
            q.push(tmp);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}