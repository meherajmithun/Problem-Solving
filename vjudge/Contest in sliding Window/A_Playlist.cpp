#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << '\n' 

int main(){
    int n; cin >> n;
    vector<ll>v(n);
    for(auto &u : v) cin >> u;
    map<int,int>mp;
    int l=0,r=0;
    int mx = INT_MIN;
    while(r < n){
        mp[v[r]]++;
        if(mp[v[r]] == 2){
            while(l < r and mp[v[r]] == 2){
                mp[v[l]]--;
                l++;
            }
        }
        mx = max(mx , r-l+1);
        r++;
    }
    print(mx);
}