#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>v(100005);
int dp[100005];

int solve(int i){
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];

    int first = abs(v[i]-v[i+1]) + solve(i+1);
    int mn = first;
    if(i+2 <= n){
        int second = abs(v[i] - v[i+2])+solve(i+2);
        mn = min(first,second);
    }
    dp[i] = mn;
    return dp[i];
}

int main(){
    for(int i=0; i<=100005; i++) dp[i] = -1;

    cin>>n;
    for(int i=1; i<=n; i++) cin>>v[i];
    int ans = solve(1);
    cout<<ans;

}