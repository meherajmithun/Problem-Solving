#include <bits/stdc++.h>
using namespace std;

void solve() {
    int query; cin >> query;
    stack<int>st;
    int q = 100;
    while(q--) st.push(0);
    while(query--){
        int a; cin >> a;
        if(a == 1){
            int  b; cin >> b;
            st.push(b);
        }
        else{
            cout<<st.top()<<'\n';
            st.pop();
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
}
