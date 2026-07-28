#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
const int N = 10000005;
vector<int>fact(N, 1);
 
void factorial(){
    for(int i=1; i<N; i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    // for(int i=1; i<10; i++) cout<<fact[i]<<" "; cout<<'\n';
}
 
int bigmod(int a,int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = ( (ans%mod)*(a%mod) )%mod;
        }
        a = ( (a%mod)*(a%mod) )%mod;
        b >>= 1;
    }
    return ans;
}
 
 
void ncr(int n, int r){
    int x = (fact[r]*fact[n-r]);
    int y = bigmod(x,mod-2);
    cout<<(fact[n]*y)%mod<<'\n';
}
 
int32_t main(){
    
    int tc; cin>>tc;
    factorial();
    while(tc--){
        int a,b; cin>>a>>b;
        ncr(a,b);
    }
 
}