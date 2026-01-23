#include<bits/stdc++.h>
using namespace std;
const int N = 1000005;
bitset<N>isprime;
vector<int>prime;
#define int long long

void sieve(){
    isprime[1]=1;
    for(int i=2; i<N; i++){
        if(isprime[i]) continue;
        for(int j=2*i; j<N; j+=i) isprime[j]=1;
    }
    for(int i=2; i<N; i++){
        if(!isprime[i])prime.push_back(i);
    }
    // for(int i=0; i<10; i++) cout<<prime[i]<<" "; cout<<'\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    sieve();

    int n; cin>>n;
    int query; cin>>query;
    while(query--){
        int type; cin>>type;
        int k; cin>>k;
        int m = n;
        if(type==1){
            cout<<m<<" "<<k<<" ";
            int g = __gcd(n,k);
            cout<<g<<'\n';
            int ans = 1;
            for(int i=0; prime[i]*prime[i]<=g; i++){
                if(g%prime[i]==0){
                    int cnt = 0;
                    while(g%prime[i]==0){
                        g/=prime[i]; cnt++;
                    }
                    ans *= (cnt+1);
                }
            }
            if(g>1) ans *= 2;
            cout<<ans<<'\n';
        }
        else if(type==2){

        }
    }

}