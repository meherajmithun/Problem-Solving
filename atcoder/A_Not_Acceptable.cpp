//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>c) cout<<"Yes"<<endl;
    else if(a==c){
        if(b>=d) cout<<"Yes\n";
        else cout<<"No\n";
    }
    else cout<<"No\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}