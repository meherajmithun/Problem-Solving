//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int product = 1;
    int cnt = 0;
    bool f = 0;
    int l=0,r=0;
    int neg=0;
    while(r<n){
        if(v[r]<0) neg++;
        product *= v[r];
        if(product < 0 and !f){
            f= 1;
        }
        if(product<0 and f ){
            cnt++;
        }
        if(product>0 and f){
            while(product>0){
                product /= v[l];
                l++;
                //print(product);
            }
            if(product<0) cnt++;
        }
        if(r<n and f){

            if((product*v[r+1]) > 0){
                while(product<0){
                    product /= v[l];
                    l++;
                    cnt++;
                }
            }
        }
        r++;
       // cout<<product<<" ";
    }
    while(product<0 and l<=r){
        product /= v[l];
        l++;
        cnt++;
    }
    print(cnt);
    print(neg);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1;// cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}