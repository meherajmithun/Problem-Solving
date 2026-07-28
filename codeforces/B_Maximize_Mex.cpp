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

void solve(){
    int n,x ;  cin >> n >> x;
    vector<int>v(n);
    map<int,int>mp;
    for(auto &a : v) {
        cin>>a;
        mp[a]++;
    }
    int mex = 0;    sort(all(v));

    for(auto a : v){
        if(a==mex) mex++;
    }
    if(mex==0){
        print(mex); return;
    }

  for (int k = 0; k <= n; ++k) {
    if (mp[k] == 0) {
      cout << k << '\n';
      return;
    }
    if (mp[k] > 1) {
      int extra = mp[k] - 1;
      mp[k] = 1;
      if (k + x <= n) {
        mp[k + x] += extra;
      }
    }
  } 
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}