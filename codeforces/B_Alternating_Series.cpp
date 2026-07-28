#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>ans;
    for(int i=1; i<=n; i++){
        if(i&1) ans.push_back(-1);
        else ans.push_back(3);
    }
    if(!(n&1)) {
        ans.pop_back();
        ans.push_back(2);
    }
    for(auto a : ans) cout<<a<<" ";
    cout<<'\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}