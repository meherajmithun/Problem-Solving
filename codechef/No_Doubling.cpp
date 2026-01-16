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
    int n; cin>>n;

    multiset<int,greater<int>>ms;
    for(int i=0; i<n; i++){
        int a; cin>>a;
         ms.insert(a);
    }
    int sum = 0;
    vector<int>ans;
    while(!ms.empty()){
        int x = *ms.begin();
        if(x != sum){
            ans.push_back(x); sum+=x; ms.erase(ms.find(x));
        }
        else{
            auto k = ms.upper_bound(sum);
            auto y = next(k);
            if(y != ms.end()){
                ans.push_back(*y);
                sum += *y; ms.erase(ms.find(*y));
            }
            else{
                ans.push_back(x);
                sum += x; ms.erase(ms.find(x));
            }
        }
    }


    for(auto u : ans) cout<<u<<" "; cout<<nl;   
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}