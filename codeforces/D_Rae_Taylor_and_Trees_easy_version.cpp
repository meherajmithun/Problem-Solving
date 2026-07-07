// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    set<int>st1,st2;
    for(auto a : v) st1.insert(a);
    if(v[0]>*(st1.rbegin())){
        cout<<"No\n"; return;
    }
    st2.insert(v[0]); st1.erase(v[0]);
    for(int i=1; i<n; i++){
        // if(i==0 and v[i]<*(st1.begin())){

        // }
        int a = *(st1.rbegin()) , b = (*st2.begin());
        if(i==n-1){
            if(v[i]<b){
                cout<<"No\n"; return;
            }
        }
        
        if(a<b){
            cout<<"No\n"; return;
        }
        st2.insert(v[i]); st1.erase(v[i]);
    }
    cout<<"Yes\n";
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}