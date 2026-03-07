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
const int N = 32768;

void solve() {
    vector<int>dis(N+123, -1);
    queue<int>q;
    q.push(1); dis[1]=1;

    while(!q.empty()){
        int a = q.front();
        q.pop();
        if(dis[a]==-1){
            
        }
    }
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}