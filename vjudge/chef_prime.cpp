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

int next_prime(int n){
    n++;
    int range = n+540;
    for(int i=n; i<=range; i++){
        bool bl = 1;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                bl=0;break;
            }
        }
        // if(i>10) return 0;
        // cout<<i<<" "<<bl<<nl;
        if(bl) return i;
    }
}

void solve() {
    int n; cin>>n;
    vector<int>a(n),b(n);
    int prime = next_prime(n);
    // cout<<prime<<nl;
    int l=n,r=n;
    while(l>0){
        int p = prime-l;
        if(p<=r){
            a[l-1] = l;
            b[l-1] = p;
            l--;
        }
        else{
            r = l;
            prime = next_prime(r);
        }
    }
    for(auto i : a) cout<<i<<" "; cout<<nl;
    for(auto i : b) cout<<i<<" "; cout<<nl;

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