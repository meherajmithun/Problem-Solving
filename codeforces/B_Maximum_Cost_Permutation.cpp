//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;

bool zero(vector<int>&v, int n){
    for(auto u : v){
        if(u != 0){
            return 0;
        }
    }
    return 1;
}

void solve() {
    int n; cin>>n;
    vector<int>v(n),v3(n);
    for(auto &u : v) cin>>u;
    if(zero(v,n)){
        cout<<n<<endl;
        return;
    }
    set<int>st;
    for(int i=1; i<=n; i++){
        st.insert(i);
        v3[i-1] = i;
    }
    vector<pair<int,int>>vp;
    for(int i=0; i<n; i++){
        if(v[i] != 0){
            st.erase(v[i]);
        }
    }
    for(auto u : st){
        vp.push_back({u,0});
    }
    reverse(vp.begin() , vp.end());
    vector<int>idx(n);
    for(int i=0,j=0; i<n; i++){
        if(v[i] == 0){
            idx[i] = 0;
            v[i] = vp[j].first;
            j++;
        }
        else{
            idx[i] = 1;
        }
    }
    //for(auto u : idx) cout<<u<<" "; cout<<endl;
    //for(auto u : v) cout<<u<<" "; cout<<endl;
    for(int i=0; i<n; i++){
        if(v[i] == v3[i] and idx[i] == 0 and i<n-1 and idx[i+1] == 0){
            swap(v[i],v[i+1]);
        }
        else if(v[i] == v3[i] and idx[i] == 0 and i>0 and idx[i+1] == 0){
            swap(v[i],v[i-1]);
        }
    }
    int cost = 0;
    for(int i=0; i<n; i++){
        if(v[i] != v3[i]) cost++;
    }
    print(cost);
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}