#include<bits/stdc++.h>
using namespace std;
#define print(x) cout << x << '\n';

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    map<int,int>mp;
    int cnt = 0;
    int l = 0 ,r = 0;
    while( r < n){
        mp[v[r]]++;
        if(mp.size() == k){
            cnt++;
        }
        if(mp.size() > k){
            cnt++;
            while(l < r and mp.size() > k){
                mp[v[l]]--;
                if(mp[v[l]] == 0){
                    mp.erase(v[l]);
                }
                l++;
            }
        }
        r++;
    }
    print(cnt);
}