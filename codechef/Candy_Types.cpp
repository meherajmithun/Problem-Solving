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
    map<int,int>mp;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        mp[a]++;
    }   
    int mx = -1, ans=0;
    for(auto [a,b] : mp){
        if(b>mx){
            ans = a;
            mx = b;
        }
    }
    print(ans);
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}