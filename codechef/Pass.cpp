// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n = 5;
    int f1=0,f2=0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a>=60) f1++;
        if(a>=30) f2++;
    }
    if(f1>1 and f2>3) cout<<"Pass\n";
    else cout<<"Fail\n";
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