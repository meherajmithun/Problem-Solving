#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    sort(v.begin() , v.end());
    
    int cnt = 0;
    int mx = 0;
    for(int i = 0;i < n; i++){
        for(int j = i+1; j<n; j++){
            cnt = 0;
            int l = 0 , r = n-1;
            int k = v[i]+v[j];
            while(l < r){
                if((v[l]+v[r]) == k){
                    l++; r--;
                    cnt++;
                }
                else if((v[l]+v[r]) < k){
                    l++;
                }
                else{
                    r--;
                }
            }
            mx = max(mx,cnt);
        }
    }
    cout<<mx<<'\n';
}

int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}