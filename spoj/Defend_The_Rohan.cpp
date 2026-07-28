// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
#define pii pair<int,int>

void solve() {
    int n; cin>>n;
    vector<pii>adj[n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int a; cin>>a;
            // if(a==0) continue;
            adj[i].push_back({j,a});
        }
    }
    // for(int i=1; i<=n; i++){
    //     for(auto [v,w] : adj[i]) cout<<i<<" "<<v<<" "<<w<<nl; cout<<nl;
    // }
    int order; cin>>order;
    int ans = 0;
    while(order--){
        int s,des; cin>>s>>des;
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        vector<int>dis(n+1, LLONG_MAX);
        pq.push({0,s});
        dis[s] = 0;
        while(!pq.empty()){
            pii p = pq.top(); pq.pop();
            int d,u;
            tie(d,u) = p;
            if(dis[u]<d) continue;
            for(auto [v,w] : adj[u]){
                int nd = w+d;
                if(nd<dis[v]){
                    pq.push({nd, v});
                    dis[v] = nd;
                }
            }
        }
        ans += dis[des];
    }
    cout<<ans<<nl;
}

int32_t main() {
    fast
    int tc = 1;
    int w = 1;
    cin >> tc;
    while (tc--) {
        cout<<"Case #"<<w++<<": "; 
        solve();
    }
    return 0;
}