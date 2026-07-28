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
   int n,l,r; cin>>n>>l>>r;
//    if(abs(l-r) < n){
//     cout<<"NO\n";
//     return;
//    } 
    vector<int>ans;
    for(int i=1; i<=n; i++){
        int tmp = ((l+i-1)/i) * i;
        if(tmp > r){
            cout<<"NO\n";
            return;
        }
        ans.push_back(tmp);
    }
    cout<<"YES\n";
    for(auto u : ans) cout<<u<<" "; cout<<endl;
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