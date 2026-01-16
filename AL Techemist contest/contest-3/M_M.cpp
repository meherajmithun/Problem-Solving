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
    vi v(n);
    vi v2(n);
    for(auto &u : v) cin >> u;
    for(auto &u : v2) cin >> u;
    int cnto = 0 , cnta = 0;
    int mxo = 0 , mxa = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 0){
            mxo = max(mxo,cnto);
            cnto = 0;
        }
        else if(v[i] != 0){
            cnto++;
        }
    }
    for(int i = 0; i < n; i++){
        if(v2[i] == 0){
            mxa = max(mxa,cnta);
            cnta = 0;
        }
        else if(v2[i] != 0){ cnta++;
        }
    }   
    if(mxa > mxo) cout<<"Addy"<<endl;
    else if(mxa < mxo) cout<<"Om"<<endl;
    else cout<<"Draw"<<endl;
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