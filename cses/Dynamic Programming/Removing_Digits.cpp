#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[1000009];
 
int call(ll n){
    if(n == 0) return 0;
    if(dp[n] != 0) return dp[n];
    int tmp = n;
    int res = INT_MAX;
    while(tmp > 0){
        int k = tmp%10;
        if(k != 0){
            res = min(res, 1+call(n-k));
        }
        dp[n] = res;
 
        tmp/=10;
    }
    
    return dp[n];
}
int main (){
    ll n ; cin >> n;
    ll ans = call(n);
    cout<<ans<<endl;
}