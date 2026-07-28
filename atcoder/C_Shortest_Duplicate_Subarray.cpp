#include <bits/stdc++.h>
using namespace std;

void slow() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

int main() {
    slow();
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int l = 0,r = 0;
    int mn = INT_MAX;
    map<int,int>mp;
    bool gese = false;
    while(r < n){
        mp[v[r]]++;
        if(mp[v[r]] > 1){
            while(mp[v[r]] > 1){
                gese = true;
                mn = min(mn, r-l+1);
                mp[v[l]]--;
                l++;
            }
        }
        r++;
    }
    cout<<(gese ? mn : -1)<<'\n';
}
