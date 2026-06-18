// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define ll long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    string str; int t;
    while(cin>>str>>t){
        if(str=="0" and t==0) return;
        
        int val = stoll(str,nullptr, 0);
        // cout<<val<<nl;
        int score=0;
        while(t--){
            string s; cin>>s;
            int n; cin>>n;
            if(s=="i"){
                if(n==val) score++;
                val = n;
            }
            else if(s=="i++"){
                if(n==val) score++;
                val = n+1;
            }
            else if(s=="++i"){
                val++;
                if(n==val) score++;
                val = n;
            }
            else if(s=="i--"){
                if(val==n) score++;
                val = n-1;
            }
            else if(s=="--i"){
                val--;
                if(val==n) score++;
                val = n;
            }
        }
        cout<<score<<nl;
    }

}
int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    int w = 1;
    while (tc--) {
        solve();
    }
    return 0;
}