//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve() {
    int m,n; cin>>m>>n;
    string s; cin>>s;
    if(m&1){
        cout<<"No\n";
        return;
    }
    int a=0,b=0;
    for(auto u : s){
        if(u == '0') b++;
        else a++;
    }  
    if(m == n){
        if(a==b) cout<<"Yes\n";
        else cout<<"No\n";
        return;
    }
    if(a>b){
        int need = m/2;
        if(a>need){
            cout<<"No\n";
            return;
        }
        int baki = m-n;
        if(baki+b == a){
            cout<<"Yes\n";
            return;
        }
        int k = need-a;
        if(k+a == baki-k+b){
            cout<<"Yes\n";
            return;
        }
    }
    else{
        int need = m/2;
        if(b>need){
            cout<<"No\n";
            return;
        }
        int baki = m-n;
        if(baki+a == b){
            cout<<"Yes\n";
            return;
        }
        int k = need-b;
        if(k+b == baki-k+a){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}