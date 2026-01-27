#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
bool call(ll n){
    if(n == 2) return 1;
    if(n == 1 or n%2 == 0) return 0;
    if(n == 2) return 1;
 
    for(ll i=3; i<=sqrt(n); i+=2){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
 
void solve(){
    ll n; cin>>n;
    for(ll i=n+1; i<=n+540; i++){
        if(call(i)){
            cout<<i<<'\n';
            return;
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}
