#include<bits/stdc++.h>
using namespace std;
#define int long long
#define print(x) cout<<x<<'\n'

int32_t main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        vector<int>pre(n+1);
        for(int i=1; i<n+1; i++){
            char c; cin>>c;
            int tmp = c - '0';
            pre[i] = pre[i-1] + tmp;
        }
        int ans = 0;
        map<int,int>mp;
        for(int i=0; i<n+1; i++){
            int k = pre[i] - i;

            // cout<<k<<endl;
            ans += mp[k];
            mp[k]++;
        }
        print(ans);
    }
}