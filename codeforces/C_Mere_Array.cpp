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
    for(auto &u : v) cin>>u;
    vector<int>v2 = v;
    sort(v2.begin() , v2.end());
    int tmp = v2[0];
    for(int i=0; i<n; i++){
        if(v[i] != tmp and ( __gcd(v[i],tmp) != tmp or __gcd(v2[i],tmp) != tmp)){
            cout<<"NO\n";
            return;
        }
    }
    print("YES");
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