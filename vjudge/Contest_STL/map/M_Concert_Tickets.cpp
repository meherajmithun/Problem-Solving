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
    int n,k; cin >> n >> k;
    vi v(n),v2(k);
    for(auto &u : v) cin >> u;
    sort(v.begin() , v.end());
    // for(auto u : v) cout<<u<<" ";
    // cout<<endl;
    for(int i=0; i<k; i++){
        int a; cin >> a ;
        sort(v.begin() , v.end());
        int l = lower_bound(v.begin() , v.end() , a) - v.begin();
        int b = upper_bound(v.begin() , v.end() , a) - v.begin();
        int tmp = l;
        bool paisi = false;
        while(l <= b){
            if(v[l] == a){
                cout<<v[l]<<endl;
                v[l] = -1;
                paisi = true;
                break;
            }
            l++;
        }
        if(!paisi){
            cout<<v[tmp-1]<<endl;
            v[tmp-1] = -1;
        }
        // if(v[l] == a){
        //     cout<<a<<endl;
        //     v[l] = -1;
        // }
        // else if(v[l+1] == a){
        //     cout<<v[l]<<endl;
        //     v[l+1] = -1;
        // }
        // else{
        //     cout<<v[l-1]<<endl;
        //     v[l-1] = -1;
        // }
    }
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