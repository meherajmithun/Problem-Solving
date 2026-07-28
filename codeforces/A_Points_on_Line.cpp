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

int call(int n){
    if(n < 2) return 0;
    return (n*(n-1))/2;
}

void solve() {
    int n,d; cin>>n>>d;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int ans = 0;
    int l=0,r=2;
    while(r<n){
        while(abs(v[l]-v[r]) > d){
            l++;
        }  
        ans += call(r-l);
        r++;
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

// binary seach 
//  IN THE NAME OF ALLAH

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl '\n'
// #define print(x) cout << x << '\n'
// #define mod 1000000007
// int dx[] = {0, 0, +1, -1};
// int dy[] = {+1, -1, 0, 0};
// // int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// // int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

// void solve() {
//     int n,d; cin>>n>>d;
//     vector<int>v(n);
//     for(auto &u : v) cin>>u;
//     int ans = 0;
//     for(int i=n-1; i>=0; i--){
//         int a = v[i]-d;
//         int k = lower_bound(v.begin() , v.end(),a)-v.begin();
//         //cout<<i-k<<" ";
//         if(i-k < 2) continue;
//         else{
//             int  t = i-k;
//             ans += (t*(t-1)/2);
//         }

//     }
//     print(ans);

// }

// int32_t main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);

//     int tc = 1; //cin >> tc;
//     while (tc--) {
//         solve();
//     }
//     return 0;
// }