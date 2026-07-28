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
   int n = s.size();
   int cnt = 0,mx = INT_MAX;
   for(int i=0; i<n; i++){
    if(s[i] == '1' and i<n-1 and s[i+1] == '0'){
        int j;
        bool f = 0;
        for(j=i+1; j<n; j++){
            if(s[j] == '1') {
                f = 1;
                break;
            }
            s[j] = '1';
        }
        if(f) {
            mx = min(mx,j-i-1);
            //cout<<i<<" "<<j<<endl;
        }
    }
   }
   //print(s);
   if(s[0] == s[n-1]) mx = 0;
   if(mx == INT_MAX) mx = 0;
   print(mx);
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