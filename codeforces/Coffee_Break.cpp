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
string ans = "00:00,11:11,22:22";

void solve(){
    string s; cin>>s;
    if(s <= "00:00"){
        cout<<"00:00"<<nl;
        return;
    }
    if(s <= "11:11"){
        cout<<"11:11"<<nl;
        return;
    }
    if(s <= "22:22"){
        cout<<"22:22"<<nl;
        return;
    }
    cout<<"00:00\n";
}

int32_t main(){
    fast
    int tc =1 ; cin >> tc;
    while(tc--){
        solve();
    }
}