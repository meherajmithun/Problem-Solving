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

void solve() {
    int n , k ; cin >> n >> k;
    vi v;
    vi b(k+1);
    vi c(k+1);
    map<int,int>mp;
    int sum = 0;
    bool flag = false;
    for(int i = 1; i <= k; i++){
        cin >> b[i] >> c[i];
        if(b[i-1] == b[i]){
            sum += (c[i] + c[i-1]);
            true;
        }
        else{
            if(flag == false){
                v.pb(c[i]);
            }
            if(flag == true){
            v.pb(sum);
            false;
            }
            sum = 0;
        }
    }
    if(flag == true){
    v.pb(c[k]);
    }
    else{
        v.pb(sum);
    }
    for(auto u : v) cout<<u<<" ";
    cout<<endl;
    if(n < k) cout<<*max_element(all(v))<<endl;
    else{
        int ans = 0;
        for(int i = 0; i < v.size(); i++){
            ans += v[i];
        }
        cout<<ans<<endl;
    }

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