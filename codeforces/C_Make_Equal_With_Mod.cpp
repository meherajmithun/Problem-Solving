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

bool is_equal(vector<int>&v,int n){
    for(int i=0; i<n-1; i++){
        if(v[i] != v[i+1]){
            return 0;
        }
    }
    return 1;
}

bool is_even(vector<int>&v,int n){
    for(int i=0; i<n; i++){
        if((v[i]&1)){
            return 0;
        }
    }
    return 1;
}

bool is_odd(vector<int>&v,int n){
    for(int i=0; i<n; i++){
        if(!(v[i]&1)){
            return 0;
        }
    }
    return 1;
}

bool check_1(vector<int>&v,int n){
    for(int i=0; i<n; i++){
        if(v[i] == 1){
            return 1;
        }
    }
    if(v[0] == v[n-1]) return 1;
    return 0;
}

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    sort(v.begin() , v.end());
    if(is_equal(v,n)){
        cout<<"YES\n";
        return;
    }
    if(is_odd(v,n)){
        cout<<"YES\n";
        return;
    }
    if(is_odd(v,n)){
        cout<<"YES\n";
        return;
    }
    if(check_1(v,n)){
        cout<<"NO\n";
        return;
    }
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i] == 1){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}