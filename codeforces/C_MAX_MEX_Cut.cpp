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
    string s1,s2;
    cin >> s1 >> s2;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s1[i] == '1' and s1[i] == s2[i] and s1[i+1] == '0' and s2[i+1] == '0'){
            ans += 2;
            i += 1;
        }

        else if(s1[i] == '0' and s1[i] == s2[i] and s1[i+1] == '1' and s2[i+1] == '1'){
            ans += 2;
            i += 1;
        }
        else if(s1[i] == '0' and s2[i] == '1') ans += 2;
        else if(s1[i] == '1' and s2[i] == '0') ans += 2;
        else if(s1[i] == '0' and s2[i] == '0') ans++;
    }  
    cout<<ans<<endl;
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