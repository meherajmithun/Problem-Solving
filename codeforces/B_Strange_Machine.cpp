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
    int n,q; cin>>n>>q;
    string s; cin>>s;
    int a =0,b=0;
    for(char c : s) {
        if(c=='B') b++;
        else a++;
    }
    int x = a,y=b*2;

    cout<<x<<" "<<y<<nl;

    while(q--){
        int a; cin>>a;
        int k = x+y;
        // int i=0,cnt=0;
        // while(a){
        //     if(s[i]=='A'){
        //         a -= 1;
        //     }
        //     else a/=2;
        //     i++; cnt++;
        //     if(i == n) i=0;
        // }
        // cout<<cnt<<nl;
    }   
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}