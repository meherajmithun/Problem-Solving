#include<bits/stdc++.h>
using namespace std;
int n,k,dp[100005];
vector<int>v(100005);

int solve(int i){
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];
    int ans = INT_MAX;
    for(int j=1; j<=k; j++){
        if(i+j>n) break;
        int res = abs(v[i]-v[j+i])+solve(i+j);
        ans = min(ans,res);
    }
    dp[i] = ans;
    return ans;
}

int main(){
    memset(dp , -1, sizeof(dp));
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>v[i];
    int l = solve(1);
    cout<<l<<endl;
}