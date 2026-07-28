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
    string s; cin>>s;
    int n = sz(s);
    for(char c : s){
        if(c == '*'){
            if(n==1) cout<<"1\n";
            else cout<<"-1\n";
            return;
        }
    }   
    int l=0,r=0;
    while(l<n){
        if(s[l]!='<') break;
        l++;
    }
    while(r<n){
        if(s[n-1-r]!='>') break;
        r++;
    }
    cout<<n-min(l,r)<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}