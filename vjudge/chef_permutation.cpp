// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin>>n;
    vector<int>a(n),b(n),c(n);
    for(auto &i : a) cin>>i;
    for(auto &i : b) cin>>i;
    if(n<=2){
        cout<<"IMPOSSIBLE\n"; return;
    }
    iota(all(c),1);
    if(n==3){
        for(int i=0; i<n; i++){
            if(a[i]==c[i] or b[i]==c[i]){
                for(int j=0; j<n; j++){
                    if(a[i]!=c[j] and b[i]!=c[j]){
                        swap(c[i],c[j]); break;
                    }
                }
            }
        }
        for(auto i : c) cout<<i<<" "; cout<<nl; return;
    }
    // for(auto i : c) cout<<i<<" "; cout<<nl;
    for(int i=0; i<n; i++){
        if(a[i]==c[i] or b[i]==c[i]){
            for(int j=0; j<n; j++){
                if(a[i]!=c[j] and b[i]!=c[j] and a[j]!=c[i] and b[j]!=c[i]){
                    swap(c[i],c[j]); break;
                }
            }
        }
    }
    // for(int i=0; i<n; i++){
    //     if(a[i]==c[i] or b[i]==c[i]){
    //         cout<<"IMPOSSIBLE\n"; return;
    //     }
    // }
    for(auto a : c) cout<<a<<" "; cout<<nl;

}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}