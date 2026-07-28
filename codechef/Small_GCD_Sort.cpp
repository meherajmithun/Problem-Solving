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

bool cmp(pair<int,int>&a , pair<int,int>&b){
    if(a.first == b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}

void solve(){
    int n; cin>>n;
    vector<pair<int,int>>vp;
    for(int i=1; i<=n; i++){
        int k = __gcd(i,n);
        vp.push_back({k, i});
    }
    //for(auto [a,b] : vp) cout<<a<<" "<<b<<endl;
    sort(all(vp) ,cmp);
    for(auto [a,b] : vp) cout<<b<<" "; cout<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}