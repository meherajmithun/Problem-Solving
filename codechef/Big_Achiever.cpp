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
    int n; cin >> n;
    vi v(n);
    for(auto &u : v) cin >> u;
    cout<<1<<" ";
    for(int i=1; i<n; i++){
        bool paisi = true;
        int cnt = 0;
        for(int j=i-1; j>=0; j--){
            if(v[j] < v[i]){
                cnt++;
            }
        }
        if(cnt == i) cout<<1<<" ";
        else cout<<0<<" ";
    }
    cout<<endl;
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