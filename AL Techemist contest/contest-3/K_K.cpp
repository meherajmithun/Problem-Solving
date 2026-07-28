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
    int n ; cin >> n;
    string s ; cin >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'u' or s[i] == 'o'){
            cnt = 0;
        }
        else{
            cnt++;
        }
        if(cnt == 4){
            no;
            return;
        }
    }   
    yes;
}

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}