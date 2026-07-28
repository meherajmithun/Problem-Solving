// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int N = 200005;

int bfs(vector<int>&node,vector<int>&visited, vector<int>adj[], int i){

    int a=0,b=0;
    queue<int>q; q.push(i); visited[i]=1;node[i]=1;b++;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : adj[u]){
            if(!visited[v]){
                visited[v] = 1;
                q.push(v);
                if(node[u]==1){
                    node[v] = 0; a++;
                }
                else{
                    node[v] = 1; b++;
                }
            }
        }
    }
    return max(a,b);
}

void solve() {
    int n; cin>>n;
    vector<int>adj[N],visited(N, 0),node(N, -1);
    for(int i=0; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    for(int i=1; i<N; i++){
        if(!visited[i] and !adj[i].empty()){
            ans += bfs(node,visited,adj,i);
        }
    }
    cout<<ans<<nl;
}

int32_t main() {
    fast
    int tc = 1 , C = 1;;
    cin >> tc;
    while (tc--) {
        cout<<"Case "<<C++<<": ";
        solve();
    }
    return 0;
}