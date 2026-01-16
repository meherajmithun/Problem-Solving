//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define nl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double
#define mod 1000000007

void solve() {
    int n ; cin >> n;
    string s ; cin >> s;
    map<char,vi>mp;
    for(int i = 0; i < n; i++){
        mp[s[i]].pb(i);
    }
    for(auto u : mp){
        if(u.second.size() > 1){
            int x = u.second[0] % 2;
            for(auto v : u.second){
                int y = v % 2;
                if(x != y){
                    no;
                    return;
                }
            }
        }
    }
    yes;
}

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}