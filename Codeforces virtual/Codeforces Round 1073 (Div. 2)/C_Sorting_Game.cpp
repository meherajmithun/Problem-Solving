#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    string s2 = s;
    sort(s.begin() , s.end());
    if(s==s2) cout<<"Bob\n";
    else {
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(s[i] != s2[i]) ans.push_back(i+1);
        }
        cout<<"Alice\n"; cout<<ans.size()<<endl;
        for(auto a : ans) cout<<a<<" "; cout<<endl;
    }
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