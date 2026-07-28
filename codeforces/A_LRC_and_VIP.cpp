// //  IN THE NAME OF ALLAH

// #include <bits/stdc++.h>
// using namespace std;
// // #define int long long
// #define endl '\n'
// #define print(x) cout<<x<<'\n'
// // #define INT_MAX LLONG_MAX
// // #define INT_MIN LLONG_MIN
// #define mod 1000000007

// void solve() {
//     int n; cin>>n;
//     if(n == 1){
//         int a; cin>>a;
//         cout<<"NO"<<endl;
//         return;
//     }
//     if(n == 2){
//         int a,b; cin>>a>>b;
//         if(a == b){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//             cout<<"1 2"<<endl;
//         }
//         return;
//     }

//     vector<int>v(n);
//     for(auto &u : v)  cin>>u;
//     vector<int>v1,v2;
//     int l=1,r=n-2; 
//     int x = __gcd(v[0],0);
//     int y = __gcd(v[n-1],0);
//     v1.push_back(1);
//     v2.push_back(2);
//     bool f = 1;
//     while(l<r){
//         x = __gcd(x,v[l]);
//         y = __gcd(y,v[r]);
//         if(x == y){
//             cout<<"NO"<<endl;
//             return;
//         }
//         f=0;
//         v1.push_back(1);
//         v2.push_back(2);
//         l++,r--;
//     }
//     if(f){
//         if(x != __gcd(x,v[l])){
//             v1.push_back(1);
//         }
//         else if(y != __gcd(y,v[r])){
//             v2.push_back(2);
//         }
//         else{
//             cout<<"NO"<<endl;
//             return;
//         }
//     }
//     cout<<l<<" "<<r<<endl;
//     // if(n == 3) v2.push_back(2);
//     cout<<"YES"<<endl;
//     for(auto u : v1) cout<<u<<" ";
//     for(auto u : v2) cout<<u<<" "; cout<<endl;

// }

// int32_t main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
      
//     int tc = 1; cin >> tc;
//     while (tc--) {
//         solve();
//     }
//     return 0;
// }


//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define mod 1000000007

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    bool gese = 1;
    vector<int>ans(n,2);
    for(int i=0; i<n; i++){
        int a = v[i];
        int b = 0;
        for(int j=0; j<n; j++){
            if(i == j){

            }
            else{
                b = __gcd(b,v[j]);
            }
        }
        if(a != b){
            ans[i] = 1;
            cout<<"YES"<<endl;
            for(auto u : ans) cout<<u<<" ";
            cout<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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





