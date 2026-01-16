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

bool check()

void solve(){
    string s; cin>>s;
    int n = s.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int x = s[i]-'0';
            x = (x*10)+(s[j]-'0');
            if(check(x)){
                cout<<x<<nl; return;
            }
        }
    }
    cout<<"-1\n";

}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}