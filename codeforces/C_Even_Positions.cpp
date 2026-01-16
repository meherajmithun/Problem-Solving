//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
using namespace std;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    queue<int>q;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '_' and q.empty()){
            q.push(i);
        }
        else if(s[i] == '(') q.push(i);
        else if(!q.empty() and s[i] == ')' or s[i] == '_'){
            int idx = q.front();
            q.pop();
            ans += (i-idx);
        }
    }   
    
    cout<<ans<<nl;
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}