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

bool cmp(pair<int,int>&a, pair<int,int>&b){
    if(a.second != b.second){
        return a.second>b.second;
    }
    return a.first<b.first;
}

void solve(){
    int n,k; cin>>n>>k;
    vector<int>v(n),idx(100005+10);
    map<int,int>mp;
    int t = 1;
    for(auto &a : v){
        cin>>a;
        idx[a] = t++;
        mp[a]++;
    }
    vector<pair<int,int>>vp;
    for(auto [a,b] : mp){
        vp.push_back({a,b});
    }  
    sort(all(vp),cmp);
    vector<int>cs;
    for(auto [a,b] : vp){
        while(b--){
            cs.push_back(a);
        }
    }
    for(auto a : cs) cout<<a<<" "<<idx[a]<<nl; cout<<nl;

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