#include<bits/stdc++.h>
using namespace std;
const int N = 1000005;
vector<int>fact(N+N+123, 1);
#define mod 1000000007

int bigmod(int a, int b){
    // cout<<a<<" "<<b<<'\n';
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = ( 1LL*(ans%mod)*(a%mod) )%mod;
        }
        a = ( 1LL*(a%mod)*(a%mod) )%mod;
        b >>= 1;
    }
    // cout<<a<<" "<<b<<" ";
    // cout<<ans<<'\n';
    return ans;
}

void factorial(){
    for(int i=1; i<N+N; i++){
        fact[i] = ( 1LL*(i%mod)*(fact[i-1]%mod) )%mod;
    }
    // for(int i=1; i<10; i++) cout<<fact[i]<<" "<<inv[i]<<'\n'; cout<<'\n';

}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    factorial();

    int a,b; cin>>a>>b;

    int ans = fact[a+b-1];
    int k = bigmod(fact[b],mod-2);
    int x = bigmod(fact[a-1],mod-2);
    // cout<<ans<<" "<<x<<" "<<k<<'\n';
    cout<<(1LL*ans%mod*k%mod*x%mod)%mod;

}