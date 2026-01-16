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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    string s2=s,s3=s;
    int a=0,b=0;
    int mx = -1,l=0,r=0;
    while(r<n){
        if(s[r] == 'a') a++;
        else b++;
        while(a>k and b>k){
            if(s[l] == 'a') a--;
            else b--;
            l++;
        }
        mx = max(mx,r-l+1);
        r++;
    }
    print(mx);

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