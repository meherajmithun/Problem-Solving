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
    int n,d; cin>>n>>d;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    sort(v.begin() , v.end());
    for(int i=0; i<n; i++){
        if(v[i]>d){
            if((v[0]+v[1])>d){
                cout<<"NO\n";
                return;
            }
            v[i] = v[0]+v[1];
        }
    }   
    cout<<"YES\n";
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}