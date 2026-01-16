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
    int a,b,c; cin>>a>>b>>c;
    if(a==1 and b==1 and c == 1){
        cout<<"NO\n";
        return;
    }
    int sum = a+b+c;
    if(sum % 9 == 0 and min(a,min(b,c)) >= sum/9) cout<<"YES\n";
    else cout<<"NO\n";
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}