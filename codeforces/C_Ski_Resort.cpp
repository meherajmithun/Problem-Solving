//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};


void solve() {
    int n,k,q; cin>>n>>k>>q;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    //sort(v.begin() , v.end());
    //for(auto u : v) cout<<u<<" "; cout<<endl;
    int ans = 0,l=0,r=0;
    while(r<n){
        if(v[r]<=q){
            int cnt = 0;
            while(v[r]<=q and r<n){
                r++;
                cnt++;
            }
            if(cnt>=k) {
                //int t = cnt/3;
                ans +=(cnt-k+1)*((cnt-k+1)+1)/2;
            }
        }
        else{
            l = r;
        }
        r++;
    }
    print(ans);

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}