#include<bits/stdc++.h>
using namespace std;
const int N = 1000005;
vector<int>fact(N, 1), inv(N, 1);
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
    for(int i=1; i<N; i++){
        fact[i] = ( 1LL*(i%mod)*(fact[i-1]%mod) )%mod;
        inv[i] = bigmod(fact[i],mod-2);
    }
    // for(int i=1; i<10; i++) cout<<fact[i]<<" "<<inv[i]<<'\n'; cout<<'\n';

}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    factorial();

    string s; cin>>s;
    map<char,int>mp;
    for(auto c : s) mp[c]++;
    int ans = fact[s.size()];
    // cout<<ans<<" ";
    // for(auto [a,b] : mp) cout<<a<<" "<<b<<'\n';


    for(auto [a,b] : mp){
        ans = (1LL*ans*inv[b])%mod;
        // cout<<inv[b]<<" ";
        // cout<<ans<<" ";
    }
    cout<<ans;


}