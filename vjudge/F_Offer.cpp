#include<bits/stdc++.h>
using namespace std;
#define int long long
#define print(x) cout << x << '\n';

void solve(){
    int n,t; cin>>n>>t;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int sum = 0;

    int mx = INT_MIN;
    map<int,int>mp;
    
    int l=0,r=0;
    
    while(r<n){
        mp[v[r]]++;
        if(mp[v[r]] == 1){
            sum += v[r];
        }
        if(sum > t){
            while(sum > t){
                mp[v[l]]--;
                if(mp[v[l]] == 0){
                    sum -= v[l];
                }
                l++;
            }
            //cout<<l<<" "<<r<<endl;
        }
        mx = max(mx,r-l+1);
        r++;
    }

    print(mx);

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}