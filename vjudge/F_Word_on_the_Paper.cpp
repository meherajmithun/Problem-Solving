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
    vector<string>s(8);
    for(int i = 0; i < 8; i++) cin >> s[i];
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(s[i][j] != '.'){
                cout<<s[i][j];
            }
        }
    }
    cout<<endl;
}

int32_t main() {
    slow;
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}