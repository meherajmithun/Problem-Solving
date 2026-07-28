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

vector<int> number = {11,111,1111,11111,111111,1111111,11111111,111111111};
map<int,int>dp;

int possible(int n){
    // if(n<0) return 0;
    // if(n == 0) return 1;
    // if(dp.count(n)) return dp[n];

    // int res = 0;
    // for(auto u : number){
    //     if(possible(n-u)) res = 1; 
    // }
    // dp[n] = res;
    // return dp[n];
    for(int i=0; i<1000; i++){
        int k = n-(111*i);
        if(k>=0 and k%11 == 0){
            return 1;
        }
    }
    return 0;

}

void solve() {
    int n; cin>>n;
    if(possible(n)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    dp.clear();
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