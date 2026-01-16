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
    int a,b; cin>>a>>b;
    int cnt = 0;
    if(b>31){
        while(a>0){
            a/=b;
            cnt++;
        }
        print(cnt);
        return;
    }
    int ans = LLONG_MAX;
    for(int i=b; i<=31; i++){
        if(i == 1) continue;
        cnt = i-b;
        int tmp=a;
        while(tmp>0){
            tmp/=i;
            cnt++;
        }
        ans = min(ans,cnt);
    }
    print(ans);
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