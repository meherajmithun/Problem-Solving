//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define nl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double;

void solve() {
    int n ; cin >> n;
    while(true){
        int cnt = 0;
        n++;
       string s =to_string(n);
        for(int i = 0; i < s.size(); i++){
            for(int j = i+1; j < s.size(); j++){
                if(s[i] != s[j]) cnt++;
            }
        }
        if(cnt == 6){
            cout<<s<<endl;
            return;
        }
    }
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