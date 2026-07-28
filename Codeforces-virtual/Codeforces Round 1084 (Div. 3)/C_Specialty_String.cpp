#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    stack<char>st;
    for(auto a : s){
        if(st.size()==0) st.push(a);
        else if(st.top()==a){
            while(st.size()>0 and st.top()==a) st.pop();
        }
        else st.push(a);
    }
    if(st.size()==0) cout<<"YES\n";
    else cout<<"NO\n";
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