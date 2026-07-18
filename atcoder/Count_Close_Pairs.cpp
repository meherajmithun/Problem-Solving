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
    int ans = 0,r=1;
    for(int l=1; l<=n; l++){
        while(r+1 <=n ){
            cout<<"? "<<l<<" "<<r+1<<endl;
            cout.flush();
            string s; cin>>s;

            if(s=="Yes") r++;
            else break;
        }
        ans += (r-l);
        if(r< l+1){
            r = l+1;
        }
    }
    cout<<"! "<<ans<<endl;
    cout.flush();
    return;
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}