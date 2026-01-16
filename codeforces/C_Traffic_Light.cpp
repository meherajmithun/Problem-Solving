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
    char c; cin>>c;
    string s; cin>>s;
    vector<int>v,v2;
    if(n == 1){
        if(s[0] == c){
            print(0);
            return;
        }
    }
    for(int i=0; i<n; i++){
        if(s[i] == c){
            v.push_back(i+1);
        }
    }
    s += s;
    int ans = -1;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'g'){
            v2.push_back(i+1);
        }
    }
    // for(auto u : v) cout<<u<<" "; cout<<endl;
    // for(auto u : v2) cout<<u<<" "; cout<<endl;
    for(int i=0; i<v.size(); i++){
        int a = v[i];
        int k = lower_bound(v2.begin() , v2.end(),a)-v2.begin();
        ans = max(ans,v2[k]-a);
    }
    print(ans);
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

// rggry
// 1 4
// 2 3 7 8 12 13