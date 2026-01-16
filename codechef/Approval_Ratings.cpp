//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    vector<int>v(5);
    for(auto &u : v) cin>>u;
    sort(v.begin() , v.end());
    int sum = 0;
    for(auto u : v) {
        sum += u;
    }
    int cost = 0;
    int avg = sum/5;
    if(avg >= 7){
        cout<<0<<endl;
        return;
    }
    for(int i=0; i<5; i++){
        sum -= v[i];
        v[i] = 10;
        sum += 10;
        cost += 100;
        if(sum/5 >= 7){
            break;
        }
    }
    print(cost);
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