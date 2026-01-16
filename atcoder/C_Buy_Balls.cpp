#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m; cin >> n >> m;
    vector<int>v(n) ,v2(m);
    for(auto &u : v) cin >> u;
    for(auto &u : v2) cin >> u;
    sort(v.rbegin() , v.rend());
    sort(v2.rbegin() , v2.rend());
    if(v[0] < 0 or v2[0] < 0) {
        cout<<0<<'\n';
        return;
    }
    int cnt = 0;
    int sum = 0;
    int l=0,r=0;
    bool f = true;
    while(1){

        if( v[l] > v2[r]){
            sum += v[l]; l++;
            f = true;
        }
        else{
            sum += v2[r];
            r++;
            f = false;
        }

        cnt++;
        if(cnt == max(n,m)){
            cout<<sum<<'\n';
            return ;
        }
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
}
