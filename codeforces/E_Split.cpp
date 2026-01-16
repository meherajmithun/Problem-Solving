//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define ll long long
const ll N = (ll) 3e7+5;
const ll mod = (ll) 1e9+7;
const ll inf = (ll) 1e18;
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    map<int,int>mp;
    for(auto u : v){
        mp[u]++;
    }  
    //for(auto u : mp) cout<<u.first<<" "<<u.second<<endl; 
    for(auto u : mp){
        if(u.second%k != 0){
            cout<<"0\n";
            return;
        }
    }
    
    int l=0,r=0;
    map<int,int>mp2;
    int ans = 0;
    while(r<n){
        mp2[v[r]]++;

        if(mp2[v[r]] > mp[v[r]]/k ){
            //cout<<mp2[v[r]]<<" "<<mp[v[r]]/k<<endl;
            while(mp2[v[r]] > mp[v[r]]/k){
                mp2[v[l]]--;
                l++;
            }
        }
        //cout<<r-l+1<<endl;
        ans += (r-l+1);
        r++;
    }
    print(ans);

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}