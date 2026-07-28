// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    string s2 = s;
    sort(all(s2));
    if(s==s2){
        cout<<"Bob\n"; return;
    }
    vector<int>ans;
    int cnt = 0;
    for(auto c : s){
        if(c=='0') cnt++;
    }
    for(int i=0; i<n; i++){
        if(i<cnt){
            if(s[i]=='1') ans.push_back(i+1);
        }
        else{
            if(s[i]=='0') ans.push_back(i+1);
        }
    }
    cout<<"Alice\n";
    cout<<sz(ans)<<nl;
    for(auto a : ans) cout<<a<<" "; cout<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}