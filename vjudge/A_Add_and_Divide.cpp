//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int a,b; cin>>a>>b;
    int n = max(a,b);
    // //vector<int>har[n+1];
    // for(int i=1; i<=n; i++){
    //     for(int j=i; j<=n; j+=i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // // for(auto u : har)

    // for(int i=2; i<=sqrt(n); i++){
    //     if(a%i == 0 and b%i == 0){
    //         cout<<"YES"<<endl;
    //         return;
    //     }
    // }
    // cout<<"NO\n";

    int i=1;
    while(i<100){
        int x = a*i;
        if(x%b == 0){
            while(x%b == 0)
            x /= b;
        }
        if(x == 1){
            cout<<"YES\n";
            return;
        }
        i++;
    }
    cout<<"NO\n";



}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}


