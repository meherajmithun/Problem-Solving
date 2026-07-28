//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double;

void solve() {
    int n ; cin >> n;
    set<int>st;
    for(int i =1; i <=n ; i++) st.insert(i);
    vi v(n);
    map<int,int>mp;
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));
    int cnt = 1;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
        if(v[i] - cnt > 0){
            if(mp[v[i]] > 0 and v[i] != v[i-1]){
                v[i] -= cnt;
                cnt++;
            }
        }
    }
    for(auto u : v) cout<<u<<" ";
}

int32_t main() {
    slow;
    int tc = 1;
 //   cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}