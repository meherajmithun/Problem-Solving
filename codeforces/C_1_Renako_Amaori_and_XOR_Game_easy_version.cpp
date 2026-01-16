// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    vector<int> diff;
    for(int i=0;i<n;i++){
        if(a[i] != b[i]) diff.push_back(i+1);
    }

    if(diff.empty()){
        cout << "Tie\n"; 
        return;
    }

    if(diff.size() % 2 == 0){
        cout << "Tie\n";
        return;
    }

    int last = diff.back();
    if(last & 1) cout << "Ajisai\n";
    else cout << "Mai\n";
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}
