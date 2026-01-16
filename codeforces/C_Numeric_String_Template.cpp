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
int k;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    // if(k==12) {
    //     for(auto a : v) cout<<a<<" "; return;
    // }
    for(auto &a : v) cin>>a;
    int m; cin>>m;
    while(m--){
        string s; cin>>s;
        int k = sz(s);
        if(k != n) {
            cout<<"NO\n"; continue;
        }

        int l=0,r=n-1;
        bool bl = 0;
        while(l<r){
            if(((s[l] == s[r]) and (v[l]==v[r])) or ((s[l] != s[r]) and (v[l]!=v[r]))){
                l++,r--;
            }
            else{
                bl=1; break;
            }
        }
        if(bl) cout<<"NO\n";
        else cout<<"YES\n";
    }
}

int32_t main(){
    fast
    int tc; cin >> tc;
    k=1;
    while(tc--){
        k++;
        solve();
        if(k==12) break;
    }
}