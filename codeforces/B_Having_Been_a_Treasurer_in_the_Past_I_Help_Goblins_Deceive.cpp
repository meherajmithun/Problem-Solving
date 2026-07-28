#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    map<pair<char,int>,int>mp;
    for(int i=0; i<n; i++){
        mp[{s[i] , i}] = i;
    }

    for(auto u : mp) cout<<u.first.first<<u.first.second<<" "<<u.second<<'\n';

    int cnt = 1;
    for(int i=0; i<n; i++){
        char c = s[i];
        // if(c == '-'){
        //     if(mp.count('_') and mp['_'] > i and mp.count('-') and mp['-'] > i){
        //         ///cout<<mp['_']<<mp['-']<<'\n';
        //         cnt *= 3;
        //     }
        // }
    }
    ///cout<<cnt<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
