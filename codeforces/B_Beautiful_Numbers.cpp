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
    string s; cin>>s;
    int sum=0;
    vector<int>v;
    for(int i=0; i<sz(s); i++){
        if(i==0) v.push_back(max(0,s[i]-'0'-1));
        else v.push_back(s[i]-'0');
        sum += s[i]-'0';
    }
    // cout<<sum<<nl;
    // for(auto a : v) cout<<a<<" "; cout<<nl;

    if(sum<10){
        cout<<"0\n"; return;
    }

    sort(rall(v));
    int cnt = 0;

    for(auto a : v){
        sum -= a;
        cnt++;
        if(sum<10){
            cout<<cnt<<nl;
            return;
        }
    }

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