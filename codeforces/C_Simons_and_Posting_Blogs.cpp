// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin>>n;
    set<vector<int>>st;
    for(int i=0; i<n; i++){
        int m; cin>>m;
        vector<int>tmp,cs;
        while(m--){
            int a; cin>>a;
            tmp.push_back(a);
        }
        set<int>d;
        for(int i=sz(tmp)-1; i>=0; i--){
            if(!d.count(tmp[i])){
                cs.push_back(tmp[i]);
                d.insert(tmp[i]);
            }
        }
        st.insert(cs);
    }
    // for(int i=0; i<n; i++) sort(all(v[i]));
    // for(auto a : st){
    //     for(int i=0; i<sz(a); i++){
    //         cout<<a[i]<<" "; 
    //     }
    //     cout<<nl;
    // }
    vector<int>ans;
    while(!st.empty()){
        vector<int> v = *(st.begin());
        st.erase(st.begin());

        set<int>tmp;
        for(auto a : v) {ans.push_back(a),tmp.insert(a);}
        auto d = st; st.clear();
        for(auto a : d){
            vector<int>t;
            for(auto b : a){
                if(!tmp.count(b)){
                    t.push_back(b);
                }
            }
            st.insert(t);
        }
    }
    for(auto a : ans) cout<<a<<" "; cout<<nl;
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