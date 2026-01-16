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
    if(n&1){
        cout<<"0\n"; return;
    }
    int cnt = n/4;
    if(n%4==0){
        cnt--;
    }
    // cout<<cnt<<endl;
    n = n-(cnt*4);
    cnt += (n/2);
    // cnt +=
    // while(n>4)  {
    //     cnt++;
    //     n/=4;
    // }
    // if(n%2==0){
    //     cnt += (n/2);
    // }
    cout<<cnt<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}