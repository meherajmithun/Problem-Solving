//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

bool prime(int n){
    if(n == 1) return false;
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

bool root(int n){
    int k = sqrt(n);
    if(k*k == n){
        return true;
    }
    return false;
}

void solve() {
    int n; cin>>n;
    while(n--){
        int a; cin>>a;
        if(prime(sqrt(a)) and root(a)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}