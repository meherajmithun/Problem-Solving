// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    if(n==2){
        cout<<"-1\n"; return;
    }
    if(n==1){
        cout<<"1\n"; return;
    }
    cout<<"1 2 ";
    int sum = 3;
    for(int i=2; i<n; i++){
        // cout<<sum<<" ";
        // sum += 1;
        cout<<sum<<" ";
        sum += sum;
    }
    cout<<nl;
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}