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
    if(n == 1){
        int a; cin>>a;
        cout<<"1 0\n";
        return;
    }
    for(auto &u : v) cin>>u;
    int alice = v[0],bob = v[n-1];
    int l=0,r=n-1,a=1,b=1;
    while(l<=r){
        if(alice<=bob){
            a++,l++;
            alice += v[l];
        }
        else{
            b++,r--;
            bob += v[r];
        }
    }
    a--,b--;
    cout<<a<<" "<<b;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}