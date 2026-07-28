#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int cost = n;
    if(s[0] == '1') cost++;

    int a = 0, b = 0;

    for(int i=0; i<n-1; i++){
        if(s[i]=='0' and s[i+1] == '1') a++;
        else if(s[i] == '1' and s[i+1] == '0') b++;
        if(s[i] != s[i+1]) cost++;
    }
    if(a>=2 or b>=2) cost-=2;
    else if(a>=1 or b>=1 or s[0] == '1') cost = n+1;
    else cost = n;
    cout<<cost<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
