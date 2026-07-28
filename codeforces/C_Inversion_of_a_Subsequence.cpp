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
    vector<int>a(n),b(n);
    for(auto &a : a) cin>>a;
    for(auto &a : b) cin>>a;
    int c1=0,c0=0;
    bool f1=0,f2=0;
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            if(a[i]==1) c1++;
            else c0++;
        }
        else{
            if(a[i]==1) f1=1;
            else f2=1;
        }
    }
    if(c1==0 and c0==0){
        cout<<"0\n"; return;
    }
    if(c1&1){
        cout<<"1\n";return;
    }
    if(c1>0){
        cout<<"2\n"; return;
    }
    else{
        if(f1 and f2){
            cout<<"2\n";
        }
        else cout<<"-1\n";
    }
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