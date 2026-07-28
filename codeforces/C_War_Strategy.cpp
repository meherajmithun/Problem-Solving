// IN THE NAME OF ALLAH
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
    int n,m,k; cin>>n>>m>>k;
    int left = k-1, right = n-k;
    int mx = max(left,right);
    int mn = min(left, right);

    int ans = 1;
    for(int i=1; i<=mx; i++){
        int day = m;
        int save = 1+i;

        day -= (2*i)-1;
        save += min(day,min(mn,i));
        ans = max(ans,save);
    }
    cout<<ans<<nl;


}

int32_t main(){
    fast
    int tc=1;
    cin >> tc;
    int C = 1;
    while(tc--){
        // cout << "Case " << C++ << ": ";
        solve();
    }
}