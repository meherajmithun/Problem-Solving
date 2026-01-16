//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    int ans = 0;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int tmp = n;
    bool f = true;
    for(int i=n-1; i>0; i--){
        
        if(v[i]<=v[i-1] and f){
            //tmp = i;    
            ans += (tmp-i+1);
            tmp = i;
            v[i] = 1;
            f = 0;
        }else{
            if(v[i]<v[tmp]){
                ans = n-i+1;
            }
        }
    }
    print(ans);
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