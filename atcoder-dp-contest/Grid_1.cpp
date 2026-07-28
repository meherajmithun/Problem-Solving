#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
 
int fun(int i, int j, vector<vector<char>>&cs,vector<vector<int>>&dp){
    if(i==0 and j==0 and cs[i][j]=='.') return 1;
    if(i<0 or j<0) return 0;
    if(cs[i][j]=='#') return 0;
    if(dp[i][j] !=-1) return dp[i][j];
    int up = fun(i-1,j,cs,dp);
    int left = fun(i,j-1,cs,dp);
    dp[i][j] = (up+left)%mod;
    return (up+left);
 
}
 
int32_t main(){
    int n,m; cin>>n>>m;
    vector<vector<char>>cs(n, vector<char>(m, 0));
    vector<vector<int>>dp(n+1, vector<int>(m+1,-1));
 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>cs[i][j];
            dp[i][j] = -1;
        }
    }
    // for(int i=0; i<n; i++){
    //     for(auto a : cs[i]) cout<<a<<" "; cout<<endl;
    // }
    cout<<fun(n-1,m-1,cs,dp)%mod;
 
 
}