#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    string s,s2;
    cin >> s >> s2;
    vector<int>v;
    for(int i=0; i<(int)s2.size(); i++){
        for(int j=0; j<(int)s.size(); j++){
            if(s2[i] == s[j]){
                v.push_back(j+1);
                break;
            }
        }
    }
    int ans=0;
    for(int i=0; i<v.size()-1; i++){   
        ans += abs(v[i+1] - v[i]);
    }
    cout<<ans<<endl;
}
int main(){
    fast();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}