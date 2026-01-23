// IN THE NAME OF ALLAH

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
    int n; cin>>n;
    // if(n==1){
    //     int a; cin>>a;
    //     cout<<a+1<<nl;  return;
    // }
    map<int,int>mp;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        mp[a]++;
    }   
    int ans = 0;
    for(auto [a,b] : mp){
        int x = b/(a+1);
        int y = b%(a+1);
        if(y) ans+= (a+1);
        ans += (x*(a+1));
        // if(y) ans++;
    }
    cout<<ans<<nl;
}

int32_t main(){
    fast
    int tc=1;
    cin >> tc;
    int C = 1;
    while(tc--){
        cout << "Case " << C++ << ": ";
        solve();
    }
}