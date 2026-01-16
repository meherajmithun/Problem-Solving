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
    int n; cin>>n;
    if(n==2){
        print(4);
        return;
    }   
    if(n == 3){
        print(5);
        return;
    }
    if(n%3 == 0){
        print((n/3)*5);
        return;
    }
    int three = n/3;
    three *= 3;
    int two = n-three;
    if(two%2 != 0){
        three -= 3;
        two += 3;
        if(three < 0) three = 0;
    }
    int ans = (three/3)*5 + (two/2)*4;
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