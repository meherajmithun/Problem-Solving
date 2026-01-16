#include<bits/stdc++.h>
using namespace std;

void optimize(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    string s,s2;
    cin >> s >> s2;
    vector<int>idx;
    int ans = 0;
    int cnt = 0;
    for(int i=0; i<(int)s2.size(); i++){
        for(int j = 0; j<(int)s.size(); j++){
            if(s2[i] == s[j]){
                idx.push_back(j+1);
                break;
            }
        }
    }
    for(int i=1; i<idx.size(); i++){
        ans += abs(idx[i]-idx[i-1]);
    }
    cout<<ans<<endl;
    // for(auto u : idx) cout<<u<<" ";
    //     cout<<endl;
}
int main(){
    optimize();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}