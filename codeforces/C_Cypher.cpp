#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    vector<int>ans;
    for(int i=0; i<n; i++){
        int b; cin >> b;
        string s; cin >> s;
        b = v[i];
        for(int j=s.size()-1; j >= 0; j--){
            if(s[j] == 'U'){
                b--;
            }
            else{
                b++;
            }
            if(b < 0){
                b = 9;
            }
            if(b > 9){
                b = 0;
            }
        }
        ans.push_back(b);
    }
    for(auto u : ans) cout<<u<<" ";
    cout<<endl;
}

int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}