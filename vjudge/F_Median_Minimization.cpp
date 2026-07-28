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
    vector<int>v2,v3;
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        if(i%2 == 0) v2.push_back(v[i]);
        else v3.push_back(v[i]);
    }
    // for(auto u : v2) cout<<u<<" "; cout<<endl;
    // for(auto u : v3) cout<<u<<" "; cout<<endl;
    int a = v2.size();
    int b = v3.size();
    int k = a/2,l = b/2;
    if(a == 1) k = 1;
    else if(a%2 != 0) k++;
    if(b == 1) l = 1;
    else if(b%2 != 0) l++;
    cout<<abs(v2[k-1]-v3[l-1])<<endl;
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