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
map<int,int>mp;

bool is_possible=1;
bool found=0;

int a,b;

void dfs(int x, int par){
    if(found) return;
    if(x>b) return;
    // cout<<x<<" "<<par<<nl;
    if(x==b){
        mp[x] = par;
        // parent[0][1] = par;
        found=1; return;
    }
    mp[x] = par;
    dfs(2*x , x);
    // mp[x] = par;
    dfs(10*x+1, x);
}
void solve() {
    cin>>a>>b;
    dfs(a,a);
    if(found){

        // for(auto [a,b] : mp) cout<<a<<" "<<b<<" "<<mp[b]<<nl;
        // cout<<mp[b];


        cout<<"YES\n";
        int node = b;
        // cout<<node<<'\n';
        vector<int>ans;
        while(1){
            ans.push_back(node);
            node = mp[node];
            if(node==a) break;
        }
        ans.push_back(node);
        reverse(all(ans));
        cout<<sz(ans)<<nl;
        for(auto a : ans) cout<<a<<" ";
    }
    else cout<<"NO\n";

}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}