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
    for(auto &u : v) cin >> u;
    int query ; cin >> query;
    while(query--){
        int l , s ,p;
        cin >> l >> s >> p;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(v[i] >= l){
                cnt++;
            }
        }
        cnt *= p;
        int ans = s-cnt;
        if(ans > 0){
            cout<<"Apaa Nai :("<<endl;
        }
        else{
            cout<<"Apaa Ache :)"<<endl;
        }
    }
}

int32_t main() {
    slow;
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
