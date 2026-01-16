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
    vector<int>v(n),v2(n);
    for(auto &u : v) cin>>u;
    for(auto &u : v2) cin>>u;
    vector<int>suf,pre;
    int gcd = v[0];
    for(int i=0; i<n; i++){
        gcd = __gcd(gcd,v[i]);
        pre.push_back(gcd);
    }
    gcd = v2[n-1];
    for(int i=n-1; i>=0; i--){
        gcd = __gcd(gcd,v2[i]);
        suf.push_back(gcd);
    }
    // for(auto u : pre) cout<<u<<" "; cout<<endl;
    // for(auto u : suf) cout<<u<<" "; cout<<endl;
     int j=n-1;
    for(int i=0; i<n; i++){
        int a = max(suf[j],pre[i]);
        //cout<<max(__gcd(suf[j],pre[i]),a)<<" ";
        j--;
        if(__gcd(suf[i],pre[i]) == 1){
            cout<<"NO\n";
            return; 
        }
    }
    cout<<"YES\n";

    //cout<<endl;
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