#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    vector<long long>v;
    ll a; cin >> a;
    v.push_back(a*1);
    ll b; cin >> b;
    v.push_back(b*2);
    ll c; cin >> c;
    v.push_back(c*3);
    ll ans = 0;
    for(auto u  : v) cout<<u<<" ";
    cout<<endl;
    for(int i=0; i<2; i++){
        ans += abs(v[i]-v[i+1]);
    }
    cout<<ans<<endl;
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}