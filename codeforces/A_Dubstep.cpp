//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double;

void solve() {
    string s ; cin >> s;
    string ans ;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B'){
            i += 2;
            if(!ans.empty()){
                cout<<ans<<" ";
            }
            ans.clear();
        }
        else {
            ans += s[i];
        }
    }
    cout<<ans<<endl;
}

int32_t main() {
    slow;
    int tc = 1;
 //   cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}