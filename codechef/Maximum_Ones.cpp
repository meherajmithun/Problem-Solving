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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    while(1){
        bool f = 0;
        for(int i=0; i<n-1; i++){
            if(s[i] == '0' and k>0 and s[i+1] == '1'){
                k--;
                s[i] = '1';
                f = 1;
            }
        }
        if(!f) break;
    }    
    int cnt = 0;
    for(auto c : s) {
        if(c == '1') cnt++;
    }
    cout<<cnt<<nl;
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}