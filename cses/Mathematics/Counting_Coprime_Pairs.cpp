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
const int N = 1000005;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    vector<int>hash(N,0),gcd(N,0);

    for(auto a : v) hash[a]++;
    
    for(int i=1; i<N; i++){
        for(int j=i; j<N; j+=i){
            gcd[i] += hash[j];
        }
    }
    
    for(int i=1; i<N; i++) gcd[i] = (gcd[i]*(gcd[i]-1)/2);

    for(int i=N-1; i>0; i--){
        for(int j=i+i; j<N; j+=i){
            gcd[i] -= gcd[j];
        }
    }
    cout<<gcd[1]<<nl;

}

int32_t main(){
    fast
    int tc=1; //cin >> tc;
    while(tc--){
        solve();
    }
}