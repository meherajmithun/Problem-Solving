#include<bits/stdc++.h>
using namespace std;
int dp[35];

int fibo(int n){
    if(dp[n]!=0){  return dp[n];}
    if(n==0) return 0;
    if(n==1) { dp[n] = 1; return dp[n];}
    dp[n]= fibo(n-1)+fibo(n-2)+fibo(n-3)+fibo(n-4);
    return dp[n];
}

int main(){
    dp[0] = 0, dp[1] = 1,dp[2] = 1;dp[3] = 2;
    int n; cin>>n;
    cout<<fibo(n);
}