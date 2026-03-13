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
    int n; cin>>n;
    vector<int>v(n),pos(2*n+1, 0);
    for(int i=0; i<n; i++){
        cin>>v[i]; 
        pos[v[i]]=i+1;
    }
    sort(all(v));
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]*v[j]>2*n) break;
            if(v[i]*v[j]==pos[v[i]]+pos[v[j]]) cnt++;
        }
    }
    cout<<cnt<<nl;

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