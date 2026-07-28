#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int>v(n), cnt(n+1, -1);
    for(int i=0; i<n; i++){
        cin>>v[i];
        cnt[v[i]] = 1;
    }
    for(int i=1; i<=n; i++){
        if(cnt[i]==1) continue;
        int ans = INT_MAX;
        int t = sqrt(i);
        for(int j=t; j>1; j--){
            if(cnt[j]==-1) continue;
            int tmp = i/j;
            if(cnt[tmp]==-1) continue;
            if(tmp*j ==i) ans = min(ans,cnt[j]+cnt[tmp]);
        }
        if(ans != INT_MAX) cnt[i] = ans;
    }
    for(int i=1; i<=n; i++) cout<<cnt[i]<<" ";
    cout<<endl;
}

int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}