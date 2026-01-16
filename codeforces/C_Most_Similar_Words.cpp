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
    int n , m;
    cin >> n >> m;
    vector<string>str(n);
    for(auto &u : str) cin >> u;
    int cost = INT_MAX;
    for(int i = 0; i < n; i++){
        string s = str[i];
        for(int j = i+1; j < n; j++){
            string s2 = str[j];
            int ans = 0;
            for(int k = 0; k < m; k++){
                int a = s[k]-95;
                int b = s2[k]-95;
                ans += abs(a-b);
            }
            cost = min(ans,cost);
        }
    }   
    cout<<cost<<endl;
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