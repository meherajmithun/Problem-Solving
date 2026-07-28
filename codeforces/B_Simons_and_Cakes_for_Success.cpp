#include <bits/stdc++.h>
using namespace std;
#define int long long

// int mod(int a, int b){
//     int res = 1;
//     while(b>0){
//         if(b&1) res = res*a;
//         a = a*a;
//         b >>= 1;
//     }
//     return res;
// }

void solve(){
    int n; cin>>n;
    vector<int>v;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            v.push_back(i);
            if(n/i != i) v.push_back(n/i);
        }
    }
    sort(v.begin() , v.end());
    for(auto a : v) cout<<a<<" "; cout<<endl;


}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}