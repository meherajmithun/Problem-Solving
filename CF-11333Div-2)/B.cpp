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
    cout<<"? 1 "<<n<<endl;

    int k; cin>>k;
    if(k==0 or k==n){
        cout<<"! NO"<<endl; return;
    }
    // cout<<"asche"<<endl;
    cout<<"? 1 "<<k<<endl;

    int x; cin>>x;

    if(x==k) cout<<"! NO"<<endl;
    else cout<<"! YES"<<endl;
}

int32_t main() {
    // fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}