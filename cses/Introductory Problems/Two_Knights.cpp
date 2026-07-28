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
vector<int>ans;
 
void dekh(int n){
    int total = n*n*(n*n-1)/2;
    int lagbe = 4*(n-1)*(n-2);
    ans.push_back(total-lagbe);
}
 
void solve() {
    int n; cin>>n;
    for(int i=1; i<n+1; i++){
        dekh(i);
    }
    for(auto u : ans) cout<<u<<endl;
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