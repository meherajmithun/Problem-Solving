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
    for(int i=0; i<n; i++){
        for(int j=i+2; j<n; j+=2){
            // for(int k=i; k<=j; k++){
            //     cout<<s[k]<<" ";
            // }
            // cout<<nl;
            vector<int>cnt(26, 0);
            for(int k=i; k<=j; k++){
                cnt[s[k]-'a']++;
                // cout<<s[k];
            }
            // cout<<nl<<i<<" -> "<<j<<nl;
            int len = j-i+1;
            // cout<<len<<nl;

            char c = s[(len+1)/2]; // cout<<c<<" "<<cnt[c-'a']<<" "<<len<<" "<<(len/2)<<nl;
            if(cnt[c-'a']<=len/2){
                cout<<"NO\n"; return;
            }
        }
    }
    cout<<"YES\n";
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