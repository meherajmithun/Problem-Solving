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
    int n,a,b,x; cin>>n>>a>>b>>x;
    int k = x/(a+b);
    int remain = x%(a+b);
    int ans = 0;
    //cout<<remain<<" ";
    if(remain<=a){
        ans += remain*n;
    }
    else{
        ans += abs(a*n);
    }
    ans += k*n*a;
    print(ans);

}

int32_t main(){
    fast
    int tc = 1;// cin >> tc;
    while(tc--){
        solve();
    }
}