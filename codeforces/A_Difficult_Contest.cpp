//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    string s; cin>>s;
    sort(s.rbegin() , s.rend());
    int n = s.size();
    // cout<<s<<"-> ";
    // for(int i=0; i<n-2; i++){
    //     if(s[i] == 'F' and s[i+1] == 'F' and s[i+2] == 'T'){
    //         swap(s[i], s[i+2]);
    //     }
    //     if(s[i] == 'N' and s[i+1] == 'T' and s[i+2] == 'T'){
    //         swap(s[i] , s[i+1]);
    //     }
    // }
    cout<<s<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}