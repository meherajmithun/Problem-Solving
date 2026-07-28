#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
const int M = 1005;

int n, W;
int weight[N], value[N];
int dp[N][M];

int knapsack(int i, int w) {
    if(i < 0) return 0;           
    if(dp[i][w] != -1) return dp[i][w];

    int ans = knapsack(i-1, w); 
    if(w >= weight[i]) {
        ans = max(ans, value[i] + knapsack(i-1, w - weight[i])); 
    }

    return dp[i][w] = ans;
}

void solve() {
    cin >> n >> W;
    for(int i = 0; i < n; i++) cin >> weight[i];
    for(int i = 0; i < n; i++) cin >> value[i];

    memset(dp, -1, sizeof(dp)); 
    cout << knapsack(n-1, W) << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}