#include<bits/stdc++.h>
using namespace std;
#define int long long
#define print(x) cout<<x<<'\n';

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc; cin>>tc;
    while(tc--){
        int n,k; cin>>n>>k;
        vector<int>v(n),v2(n);
        for(auto &u : v) cin>>u;
        for(auto &u : v2) cin>>u;
        int ans = 0;
        vector<int>tmp;
        for(int i=0; i<n; i++){
            ans += max(v[i],v2[i]);
            tmp.push_back(min(v[i], v2[i]));
        }
        sort(tmp.rbegin(), tmp.rend());
        for(int i=0; i<=k-2; i++){
            ans += tmp[i];
        }
        ans++;
        print(ans);
    }
}