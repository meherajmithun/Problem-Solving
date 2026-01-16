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
    vector<int>ans;
    int a=0,b=1;
    for(int i=0,j=n-1; i<=j; i++,j--){
        if(s[i] != s[j]){
            if(s[i] == '1') a=1;
            if(s[i] == '0') b=0;
            if(a>b){
                cout<<"-1\n";
                return;
            }
            ans.push_back(i+1);
            ans.push_back(j+1);
        }
    }   
    cout<<sz(ans)<<nl;
    sort(all(ans));
    for(auto u : ans) cout<<u<<" "; cout<<nl;
    
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}