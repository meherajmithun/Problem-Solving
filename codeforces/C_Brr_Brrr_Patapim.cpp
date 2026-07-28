#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    int arr[n][n];
    set<int>st;
    for(int i=1; i<=2*n ;i++){
        st.insert(i);
    }
    // for(auto u : st) cout<<u<<" ";
    // cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
            st.erase(arr[i][j]);
        }
    }
    // for(auto u : st) cout<<u<<" ";


    vector<int>ans;
    ans.push_back(*st.begin());
    map<int,int>mp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mp[arr[i][j]]++;
            if(mp[arr[i][j]] == 1){
                ans.push_back(arr[i][j]);
            }
        }
    }
    for(auto u : ans) cout<<u<<" ";
    cout<<endl;
}

int32_t main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}