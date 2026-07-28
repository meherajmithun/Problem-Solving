#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#define ll long long
#define print(x) cout << x << '\n'
#define mod 1000000009
using namespace std;
 
void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
 
void solve(){
    int n; cin >> n;
    vector<ll>v(n);
    for(auto &u : v) cin >> u;
    sort(v.begin() , v.end());
 
    ll minimum_sum = 1;
    for(int i=0; i<n; i++){
        if(minimum_sum >= v[i]){
            minimum_sum += v[i];
        }
    }
    print(minimum_sum);
}
 
int main(){
    slow();
    int tc = 1; 
    //cin >> tc;
    while(tc--){
        solve();
    }
}