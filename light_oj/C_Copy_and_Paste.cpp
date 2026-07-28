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
    int n,m; cin>>n>>m;
    string s; cin>>s;
    string s2 = s;
    for(int i=0; i<m-1; i++){
        s += s2;
    }
    // cout<<s<<endl;
    n = (int)s.size();
    vector<int>v;
    for(int i=0; i<n; i++){
        v.push_back(s[i]-'0');
    }
    
    // for(auto u : v) cout<<u<<" "; cout<<endl;
    vector<int>pre(n);
    pre[0] = v[0];
    int j = n-1;
    for(int i=1; i<n; i++){
        pre[i] =pre[i-1] + v[i];
    }
    vector<int>suf = pre;
    reverse(suf.begin(),suf.end());
    // for(auto u : pre) cout<<u<<" "; cout<<endl;
    // for(auto u : suf) cout<<u<<" "; cout<<endl;
    int cnt =0;
    for(int i=1; i<=n; i++){
        if(suf[i] == pre[i-1]) cnt++;
    }
    print(cnt);
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