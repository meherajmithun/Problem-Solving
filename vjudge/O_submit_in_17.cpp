#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int32_t main(){
    int n; cin>>n;
    int dp[n+1];
    dp[1]=0, dp[2]=1;
    for(int i=3; i<=n; i++){
        dp[i] = (((dp[i-1]+dp[i-2])%mod) * (i-1)%mod) %mod;
    }
    cout<<dp[n];

}