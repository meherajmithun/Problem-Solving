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
    int a , b ;
    cin >> a >> b;
    string s ; cin >> s;
    int cnt = 0;
    int j = 0;
    for(int i = 0; i < a; i++){
        if(s[i] == '@'){
            j = i;
            break;
        }
    }
 //   int cnt = 0;
    for(int i = j; i < a; i++){
        if(s[i] == '@'){
            s[i] = '.';
            cnt++;
        }
        if(cnt == b){
            break;
        }
    }
    int ans = 0;
    for(int i = 0; i < a; i++){
        if(s[i] == '.') ans++;
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