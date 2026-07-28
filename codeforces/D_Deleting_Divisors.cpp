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

void solve(){
    int n; cin>>n;
    if(n&1){
        cout<<"Bob\n"; return ;
    }
    int bit =  __builtin_popcount(n);
    if(bit!=1){
        cout<<"Alice\n"; return;
    }

    vector<int>v; int k = 1;
    for(int i=1; i<=32; i++){
        v.push_back(k);
        k *= 2;
    }
    // cout<<v[0]<<" ->";
    for(int i=0; i<32; i++){
        if(v[i] == n){
            if(!(i&1)){
                cout<<"Alice\n";
            }
            else cout<<"Bob\n";
        }
    }
}


int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}