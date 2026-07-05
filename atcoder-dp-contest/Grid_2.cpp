#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
 
int fun(int i, int j, vector<vector<int>>&cs,vector<vector<int>>&dp){
    if(i==0 and j==0){
        return 1;
    }
    if(i<0 or j<0) return 0;
    if(cs[i][j]==1) return 0;
    if(dp[i][j] !=-1) return dp[i][j];
    int up = fun(i-1,j,cs,dp);
    int left = fun(i,j-1,cs,dp);
    dp[i][j] = (up+left)%mod;
    return (up+left);
 
}
 
int32_t main(){
    int h,w,n; cin>>h>>w>>n;
    vector<vector<int>>cs(h+123, vector<int>(w+123, 0));
    vector<vector<int>>dp(h+1, vector<int>(w+1,-1));
    cout<<h<<" "<<w<<" "<<n<<endl;
    for(int i=0; i<n; i++){
        int x,y; cin>>x>>y;
        cs[x][y] = 1;
        cout<<x<<" "<<y<<" -> "<<cs[x][y]<<endl;
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(cs[i][j]) cout<<cs[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<fun(h-1,w-1,cs,dp)%mod;
 
 
}