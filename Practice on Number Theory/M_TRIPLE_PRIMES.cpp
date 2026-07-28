#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100005;
bitset<N>isprime;
vector<int>prime;

void sieve(){

    for(int i=2; i<N; i++){
        if(isprime[i]) continue;
        for(int j=2*i; j<N; j+=i){
            isprime[j]=1;
        }
    }
    for(int i=2; i<N; i++) {
        if(!isprime[i]) prime.push_back(i);
    }
    // for(int i=0; i<11; i++) cout<<prime[i]<<" "; cout<<'\n';
}

void solve(){
    int a; cin>>a;
    a -= 4;
    int l=1,r=prime.size()-1;
    // cout<<a<<" ";
    while(l<r){
        int x = (prime[l]*prime[l]);
        int y = (prime[r]*prime[r]);
        int z = x+y;
        // cout<<z<<" ";
        // if(z<0){
        //     cout<<z<<" "; break;
        // }
        if(z==a){
            cout<<"YES\n"; return ;
        }
        if(z>a) r--;
        else l++;
    }
    cout<<"NO\n";

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    sieve();
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}