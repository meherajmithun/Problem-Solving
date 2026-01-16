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
int n;
vector<int>v;

bool call(int x){
    vector<int>tmp;
    for(int i=0; i<n; i++){
        if(v[i] != x)
        tmp.push_back(v[i]);
    }
    int m = tmp.size();
    for(int i=0; i<m; i++){
        if(tmp[i] != tmp[m-i-1]){
            return false;
        }
    }
    return 1;
}

void solve() {
    int n;
    cin>>n;
    v.resize(n);
    for(auto &u : v) cin>>u;
    for(int i=0; i<n; i++){
        if(v[i] != v[n-i-1]){
            if(call(v[i]) or call(v[n-i-1])){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            return;
        }
    }
    cout<<"YES\n";
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