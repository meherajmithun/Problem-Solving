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
    int n; cin>>n;
    vector<int>v(n+1),pref(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + v[i];
    }
    //for(auto u : pref) cout<<u<<" "; cout<<endl;
    for(int i=1; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum1 = pref[i];
            int sum2 = pref[j]-pref[i];
            int sum3 = pref[n]-pref[j];
            if((sum1%3 == sum2%3 and sum1%3 == sum3%3) or (sum1%3 != sum2%3 and sum2%3 != sum3%3 and sum1%3 != sum3%3)){
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }
    // int sum1=0,sum2=0,sum3=0;
    // for(int i=0; i<n-2; i++){
    //     sum1 += v[i];
    //     sum2=0;
    //     for(int j=i+1; j<n-1; j++){
    //         sum2 += v[j];
    //         sum3 = 0;
    //         for(int k=j+1; k<n; k++){
    //             sum3 += v[k];
    //             if((sum1%3 == sum2%3 and sum1%3 == sum3%3) or (((sum1%3 != sum2%3) and (sum1%3 != sum3%3) and (sum2%3 != sum3%3)))){
    //                 //cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    //                 if(j!=n-1)cout<<i+1<<" "<<j+1<<endl;
    //                 return;
    //             }
    //         }
    //     }
    // }
    cout<<"0 0\n" ;  
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}