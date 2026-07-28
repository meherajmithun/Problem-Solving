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

bool cmp(pair<int,int>&a, pair<int,int>&b){
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}

void solve(){
    int N; cin>>N;
    int n = N;
    vector<vector<int>>cs;
    vector<int>idx;
    int j=0;
    for(int i=1; i<=N; i++){
        int c; cin>>c;
        vector<int>v(c);
        for(auto &a : v) cin>>a;
        cs.push_back(v); j++;
        idx.push_back(j);
    }
    int x; cin>>x;

    vector<pair<int,int>>si;
    for(int i=0; i<n; i++){
        for(auto a : cs[i]){
            if(a==x) si.push_back({idx[i], sz(cs[i])});
        }
    }

    sort(all(si),cmp);

    vector<int>ans;
    
    for(int i=0; i<sz(si)-1; i++){
        
        ans.push_back(si[i].first);

        for(int j=i+1; j<sz(si); j++){

            if(si[i].second==si[j].second) ans.push_back(si[j].first);

        }
        break;
    }

    if(sz(si)!=0 and sz(ans)==0){
        ans.push_back(si[0].first);
    }
    sort(all(ans));
    cout<<sz(ans)<<nl;
    for(auto a : ans) cout<<a<<" ";

}

int32_t main(){
    fast
    int tc=1;
    // cin >> tc;
    while(tc--){
        solve();
    }
}