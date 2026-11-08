// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    stack<int>st;
    vector<int>ans(n,0);
    int cnt = 0;
    for(int i=0; i<n; i++){
    	if(s[i]=='1') st.push(i);
    	else if(s[i]=='2'){
    		if(!st.empty()){
    			ans[st.top()] = 1; st.pop();
    		}
    		else ans[i] = 1;
    	}
    	else{
    		ans[i] = 1;
    	}
    }
    for(auto a : ans){
    	if(!a) cnt++;
    }
    cout<<cnt<<nl;
    for(int i=0; i<n; i++){
    	if(!ans[i]) cout<<(i+1)<<" ";
    }
    cout<<nl;
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