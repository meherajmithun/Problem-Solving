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
   string s ; cin >> s;
   reverse(all(s));
   string s2;
   for(int i = 0; i < s.size(); i++){
    if(s[i] == 'p'){
        s[i] = 'q';
    }
    else if(s[i] == 'q'){
        s[i] = 'p';
    }
   } 
   cout<<s<<endl;
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