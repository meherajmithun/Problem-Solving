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

void solve() {
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);
    for(auto &x : a) cin>>x;
    for(auto &x : b) cin>>x;
    vector<int>Hash(n+m+123,0);
    for(auto x : a) Hash[x]++;

    for(int i=n+m; i>0; i--){
        for(int j=i+i; j<=n+m; j+=i){
            Hash[j] += Hash[i];
        }
    }
    int p=0,q=0,r=0;

    for(auto x : b){
        if(Hash[x]==n) p++;
        else if(Hash[x]==0) q++;
        else r++;
    }

    int x = (r%2)+p;
    if(x>q) cout<<"Alice\n";
    else cout<<"Bob\n";
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