#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<'\n';
#define int long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int32_t main(){
    slow();
    int tc; cin>>tc;
    while(tc--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>v(n);
        for(auto &u : v) cin >> u;

        int ans = 0;
        map<pair<int,int>,int>mp;
        for(int i=0; i<n; i++){
            int t1 = v[i]%x;
            int t2 = v[i]%y;
            int d1 = (x-t1)%x , d2 = y-t2;
            //cout<<x-t1<<'\n';
           // cout<<t1<<" "<<x<<" -> "<<(x-t1)<<" -> "<<d1<<'\n';
            // cout<<v[i]<<'\n';
            // cout<<t1<<" "<<t2<<'\n';
            // cout<<d1<<" "<<d2<<'\n';
            if(mp.count({d1,t2})){
                ans += mp[{d1,t2}];
            }
            mp[{t1,t2}]++;
        }

        cout<<ans<<'\n';
    }
}
