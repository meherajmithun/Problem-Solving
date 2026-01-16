//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    sort(v.rbegin() , v.rend());
    // for(auto u : v) cout<<u<<" "; cout<<endl;
    int ans = 0,j=n-1;
    for(int i=0; i<v.size(); i++){
        int a = v[i];
        //cout<<ans<<" ";
        if(a>k) {
            ans++;
            continue;
        }
        int t = k/a;
        if(t == n){
            break;
        }
        while(j>i and a <= k){
            a += v[i];
            j--;
        }
        if(a>k){
            ans++;
        }
    }
    print(ans);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}