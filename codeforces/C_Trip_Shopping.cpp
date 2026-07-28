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
    vector<int>v(n),v2(n),baki;
    for(auto &u : v) cin>>u;
    for(auto &u : v2) cin>>u;
    int s = 0;
    vector<pair<int,int>>vp;
    for(int i=0; i<n; i++){
        s += abs(v[i]-v2[i]);
        int a = min(v[i],v2[i]);
        int b = max(v[i],v2[i]);
        vp.push_back({a,b});
    }
    //cout<<s<<endl;
    sort(vp.begin() , vp.end());
    //for(auto u : vp) cout<<u.first<<u.second<<endl;
    for(int i=0; i<n-1; i++){
        int a = vp[i+1].first;
        int b = vp[i].second;
        //cout<<a<<" "<<b<<endl;
        if(a<b){
            print(s);
            return;
        }
        baki.push_back(vp[i+1].first-vp[i].second);
    }
    // multiset<int>ms;
    // for(int i=0; i<n-1; i++){
    //     ms.insert(vp[i+1].first-vp[i].second);
    // }
    sort(baki.begin() , baki.end());
    int cnt = 0;
    for(int i=0; i<min(k,(int)baki.size()); i++){
        s += (2*baki[i]);
    }
    print(s);

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