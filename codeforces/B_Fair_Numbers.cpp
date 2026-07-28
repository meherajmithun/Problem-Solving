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

bool call(int n){
    int k=n;
    while(k>0){
        int r = k%10;
        if(r != 0 and n%r != 0){
            return 0;
        }
        k /= 10;
    }
    return 1;
}

void solve(){
    int n; cin>>n;
    for(int i=n;; i++){
        if(call(i)){
            print(i);
            return;
        }
    } 
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}