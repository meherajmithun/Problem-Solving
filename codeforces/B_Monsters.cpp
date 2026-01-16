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

bool cmp(pair<int,int>&a, pair<int,int>&b){
    if(a.first != b.first) return a.first>b.first;
    return a.second<b.second;
}

void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    vector<pair<int,int>>vp;
    for(int i=0; i<n; i++){
        v[i] = v[i]%k;
        if(v[i] == 0) v[i] = k;
        vp.push_back({v[i] , i+1});
    }   
    sort(vp.begin() , vp.end() ,cmp);
    for(auto u : vp) cout<<u.second<<" "; cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}