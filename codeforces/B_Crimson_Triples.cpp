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
const int N = 2e5+123;
vector<int>cnt[N];

void pre(){
    for(int i=1; i<N; i++){
        for(int j=i; j<N; j+=i){
            cnt[j].push_back(i);
        }
    }
}

void solve() {
    int n; cin>>n;
    int ans = 0;
    for(int i=1; i<=n; i++){
        int c = 0;
        for(auto a : cnt[i]) c+=(n/a);
        ans += c;
    }
    print(ans);
}

int32_t main() {
    fast
    pre();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}