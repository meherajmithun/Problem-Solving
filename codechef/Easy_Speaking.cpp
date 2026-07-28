#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    for(int i=0; i<=n-4; i++){
        if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u'){
            bool f = 0;
            for(int j=i+1; j<i+4; j++){
                if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u'){
                    f = 1; break;
                }
            }
            if(!f){
                cout<<"Yes\n"; return ;
            }
        }
    }
    cout<<"No\n";
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