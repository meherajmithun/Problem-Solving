//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    if(n%2 != 0 or n<4){
        cout<<-1<<endl;
        return;
    }   
    if(n == 4 or n == 6){
        cout<<"1 1"<<endl;
        return;
    }
    int ans1 = n/6; if(n%6 != 0) ans1++;
    int ans2 = n/4; //if(n%4 != 0) ans2++;
    cout<<ans1<<" "<<ans2<<endl;

        // for(int i=6; i<=n/2; i+6){
        //     if(n%i == 0){
        //         cout<<n/i<<" ";
        //         break;
        //     }
        // }
        // for(int i=4; i<=n/2; i+4){
        //     if(n%i == 0){
        //         cout<<n/i<<" ";
        //         break;
        //     }
        // }
        // cout<<endl;

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