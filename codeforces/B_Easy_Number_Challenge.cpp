//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1073741824
const int mx = 1e7+123;
int arr[mx];

void solve() {
    int a,b,c; cin>>a>>b>>c;

    for(int i=1; i<=(a*b*c); i++){
        for(int j=i; j<=(a*b*c); j+=i){
            arr[j]++;
        }
    }

    int ans = 0;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){
                ans += arr[i*j*k]; 
                ans %= mod;
            }
        }
    }
    print(ans);
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