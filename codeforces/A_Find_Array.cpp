//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define control ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

#define N 4000005
vector<ll> prime;
bool visprime[N];

void Prime(ll NN) {
    prime.push_back(2);
    for (ll i = 4; i <= NN; i += 2) visprime[i] = true;
    for (ll i = 3; i <= NN; i += 2) {
        if (visprime[i]) continue;
        prime.push_back(i);
        for (ll j = i * i; j <= NN; j += 2 * i) visprime[j] = true;
    }
}

void solve() {
    int n; 
    cin >> n;
    for (int i = 0; i < n && i < prime.size(); i++) {
        cout << prime[i] << " ";
    }
    cout << endl;
}

int32_t main() {
    control;
    
    Prime(N);
    
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    
    return 0;
}
