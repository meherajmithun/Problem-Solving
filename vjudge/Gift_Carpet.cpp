#include<bits/stdc++.h>
using namespace std;
#define ll long long

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}

void solve(){
    int n,m; cin >> n >> m;
    vector<string>s(n);
    for(auto &u : s) cin >> u;
    string ans;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(s[j][i] == 'v' and ans.empty()){
                ans += s[j][i];
                break;
            }
            else if(s[j][i] == 'i' and ans.back() == 'v'){
                ans += s[j][i];
                break;
            }
            else if(s[j][i] == 'k' and ans.back() == 'i'){
                ans += s[j][i];
                break;
            }
            else if(s[j][i] == 'a' and ans.back() == 'k'){
                ans += s[j][i];
                break;
            }
        }
    }
    //cout<<ans<<" ";
    if(ans == "vika") cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
	optimize();
    int tc = 1; cin >> tc;
    while(tc--){
        solve();
    }
}