#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << '\n';

void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll minsum = (k*(k+1))/2;
    ll maxsum = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
    
    if(x>=minsum and x<=maxsum) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}