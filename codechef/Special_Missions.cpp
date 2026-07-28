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
    int n,c; cin>>n>>c;
    vector<int>cs(n);
    for(auto &a : cs) cin>>a;
    string s; cin>>s;
    int ans = 0;
    bool khulse=0;
    for(int i=0; i<n; i++){
        if(khulse) {
            ans += cs[i]; continue;
        }
        if(s[i]=='0') ans += cs[i];
        else{
            if(cs[i]>=c and ans>=c){
                ans += (cs[i]-c);
                khulse=1;
            }
        } 
    }   
    cout<<ans<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}