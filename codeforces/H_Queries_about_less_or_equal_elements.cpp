#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << " ";

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n; cin>>n;
    int query; cin>>query;

    vector<ll>v(n);
    
    for(auto &u : v) cin>>u;
    sort(v.begin() , v.end());
    while(query--){
        ll a; cin>>a;
        int ub = upper_bound(v.begin() , v.end() , a)-v.begin();
        print(ub);
    }
}