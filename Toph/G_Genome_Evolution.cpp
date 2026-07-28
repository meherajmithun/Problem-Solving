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
    int a,b,t; cin>>a>>b>>t;
    if(t==1) cout<<a<<'\n';
    else if(t==2) cout<<b<<nl;
    else{
        int x = 0,base=1;
        while(a and b){
            int p = a%2;
            int q = b%2;
            if(p!=q){
                p= 0;
            }
            x  += (p*base);

            base *= 2;
            a /= 2; b /= 2;
        }
        // cout<<a<<" "<<b<<nl;
        cout<<x<<nl;
    }   
}

int32_t main(){
    fast
    int tc=1;
    cin >> tc;
    int C = 1;
    while(tc--){
        // cout << "Case " << C++ << ": ";
        solve();
    }
}