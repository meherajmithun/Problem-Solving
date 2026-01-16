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
    vector<int>odd,even;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a&1) odd.push_back(a);
        else even.push_back(a);
    }   
    if(sz(odd)==n or sz(even)==n){
        cout<<"0\n"; return;
    }
    sort(all(odd)),sort(all(even));
    int ans = 0;
    int k = odd[sz(odd)-1];
    for(auto a : even){
        if(k>=a) k+=a;
        else{
            k += a; ans = 1;
        }
    }
    cout<<even.size()+ans<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}