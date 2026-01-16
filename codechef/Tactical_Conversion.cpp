// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int cnt = 0;
    for(auto c : s){
        if(c == '1') cnt++;
        else cnt = 0;
        if(cnt>1){
            cout<<"No\n";
            return;
        }
    }   
    cout<<"Yes\n";
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}