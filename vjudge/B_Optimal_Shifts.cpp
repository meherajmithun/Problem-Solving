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
    bool check=0;
    for(char c : s){
        if(c=='0'){
            check=1; break;
        }
    }   
    if(!check) {
        cout<<"0\n"; return;
    }
    int mx=0,cnt = 0;
    s += s;
    for(char c : s){
        if(c=='0') cnt++;
        else {
            mx = max(mx,cnt);
            cnt=0;
        }
    }
    cout<<min(mx,n)<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}