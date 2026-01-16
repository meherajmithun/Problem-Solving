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
const int N = 100005;
vector<vector<int>>divisor(N+1);

void div(){
    for(int i=1; i<N; i++){
        for(int j=i+i; j<N; j+=i){
            divisor[j].push_back(i);
        }
    }
}

void solve(){
    int n,m; cin>>n>>m;
    vector<int>v(m);
    for(auto &a : v) cin>>a;
    sort(rall(v));

    vector<int>dp(n+1, -1);
    bool bl=1;
    for(int i=1; i<=n; i++){
        vector<int>remove;
        for(auto a : divisor[i]){
            if(a>=1 and a<i and dp[a]!=-1){
                remove.push_back(dp[a]);
            }
        }
        sort(all(remove));
        int idx=-1;
        for(auto a : v){
            int lo=0,hi=sz(remove)-1;
            bool paisi=1;
            while(lo<=hi){
                int mid = (lo+hi)/2;
                if(remove[mid]==a){
                    paisi=0;
                    break;
                }
                else if(remove[mid]<a) lo=mid+1;
                else hi = mid-1;
            }
            if(paisi) {
                idx=a;
                break;
            }
        }
        if(idx==-1){
            cout<<"-1\n"; return;
        }
        dp[i]=idx;
    }
    for(int i=1; i<=n; i++) cout<<dp[i]<<" "; cout<<nl;

}

int32_t main(){
    fast
    div();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}