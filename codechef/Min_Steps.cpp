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
    int n,d; cin>>n>>d;
    if((n%2 == 1) and (n%2 == 0)){
        cout<<"-1\n";
        return;
    }

    int cnt = 0;
    while(n>1){
        if(n%2 == 0 and n!= 0) {
            n /= 2;
            if(n == 1) {cnt++; break;}
        }
        else{
            n-=d;
            if(n < 0) {
                cout<<"-1\n";
                return;
            }
        }
        cnt++;
    }   
    print(cnt);
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}