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
const int N = 200005;

void solve() {
    int n,k; cin>>n>>k;
    vector<int>divv[N];
    for(int i=0; i<n; i++){
        int a; cin>>a;
        int cnt = 0;
        while(a>0){
            divv[a].push_back(cnt);
            a /= 2; cnt++;
        }

    }
    // for(int i=1; i<=10; i++){
    //     for(auto a : divv[i]) cout<<a<<" "; cout<<nl;
    // }
    int ans = INT_MAX;
    for(int i=1; i<N; i++){
        if(sz(divv[i]) < k) continue;
        sort(all(divv[i]));
        int sum = 0;
        for(int j=0; j<k; j++){
            sum += divv[i][j];
        }
        // cout<<sum<<" ";
        ans = min(ans,sum);
    }
    print(ans);
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