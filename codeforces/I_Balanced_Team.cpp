//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }  
    sort(v.begin() , v.end());
    int l=1,r=1,mx = INT_MIN;
    while(r<=n){
        if(v[r]-v[l] > 5){
            while((v[r]-v[l]) > 5){
                l++;
            }
        }
        mx = max(mx,r-l+1);
        r++;
    }
    print(mx);
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