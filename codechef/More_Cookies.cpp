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
    int n,c; cin>>n>>c;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    bool f1=0,f2=0,a=0,b=0;
    int mx = 0;
    for(int i=0; i<n; i++){
        if(v[i] == c){
            a = v[i];
            f2 = 1;
        }
        if(v[i] < c) f1 = 1;
        mx = max(mx,v[i]);
    }
    int ans = 0;
    if(f1 == 1 and f2 == 0){
        print(ans);
        return;
    }
    int m = 0;
    if(a!= 0 and f1 == 1){
        m = c+1;
    }
    for(int i=0; i<n; i++){
        if(v[i] == m){
            m++;
        }
    }
    ans = abs(mx-c)+1;
    m = abs(m-c);
    print(min(m,ans));
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