//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    if(n<=2){
        cout<<n;
        return;
    }
    int mx=INT_MIN,k=1;
    while(k<n-1){
        mx = max(mx, lcm(k,lcm(k+1,k+2)));
        k++;
    }
    print(mx);
    // if(n&1){
    //     int a=n;
    //     int b=n-1;
    //     int c = n-2;
    //     if(c%3 == 0 and a%3 == 0){
    //         while(c%3 == 0){
    //             c--;
    //         }
    //     }
    //     cout<<lcm(a,lcm(b,c));
    // }
    // else{
    //     int a=n;
    //     int b=n-1;
    //     int c=n-2;
    //     if(a%2 == 0 and c%2 == 0){
    //         while(c%2 == 0) c--;
    //     }
    //     int k = lcm(a,b);
    //     cout<<lcm(k,c);
    // }

    // int a=lcm(n,n-1);
    // cout<<lcm(a,n-2);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1;// cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}