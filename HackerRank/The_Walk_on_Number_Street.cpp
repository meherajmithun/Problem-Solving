#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    
    multiset<int>ms;
    for(int i=0; i<k; i++) ms.insert(v[i]);
    int l=0,r=k;
    while(r<=n){
        cout<<*(ms.rbegin())<<" ";
        ms.erase(ms.find(v[l]));
        ms.insert(v[r]); l++; r++;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}