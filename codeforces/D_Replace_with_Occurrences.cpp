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
    int n; cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(auto &u : v) cin>>u;
    sort(v.begin() , v.end());
    for(auto u : v){
        mp[u]++;
    }   
    int cnt =1;
    for(auto u : mp){
        cnt *= u.first;
    }
    if(cnt > n){
        cout<<"-1\n";
        return;
    }
    int a = 1;
    for(auto u : mp){
        while(u.second--){
            cout<<a<<" ";
        }
        a++;
    }
    cout<<endl;
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