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

// vector<int>t = {0,0,2,4,20000000};
// int j;

void solve(){
    int n,c; cin>>n>>c; 
    // cout<<(c-n)<<" ";
    // cout<<" "<<t[j]<<" "<<t[j]*(c-n*t[j])<<nl;
    // j++;
    int ans = 0;
    if(n==0){
        cout<<"0\n"; return;
    }
    int x = (c/(2*n));
    int y = x;
    // int a = (x*(c-n*x));
    // int b = (y*(c-n*y));
    // cout<<a<<" "<<b<<nl;
    if((x*(c-n*x)) >= (y*(c-n*y))){
        ans = x;
    }
    else ans = y;
    cout<<ans<<nl;

}

int32_t main(){
    fast
    int tc=1;  cin >> tc;
    int C = 1;
    // j=0;
    while(tc--){
        cout<<"Case "<<C++<<": ";
        solve();
    }
}