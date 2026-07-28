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
    string s ; cin >> s;
    string tmp = "!@#$%^&*()-+";
    // sort(all(s));
    // int x = unique(all(s)) - s.begin();

    bool digit = true , lower = true , upper = true, special = true;
    int ans = 0;
    if(n < 6){
        ans += (6-n);
    }
    for(int i = 0; i < n; i++){
        
        if(s[i] >= '0' and s[i] <= '9' and digit == true){
            digit = false;
        }
        else if(s[i] >= 'a' and s[i] <= 'z' and lower == true){
            lower = false;
        }
        else if(s[i] >= 'A' and s[i] <= 'Z' and upper == true){
            upper = false;
        }
        else if(special == true){
            //cout<<s[i];
            for(int j = 0; j < 12; j++){
                if(tmp[j] == s[i]){
                    special = false;
                    break;
                }
            }
        }
    }
    //cout<<digit<<special<<lower<<upper<<endl;
    if(digit) ans++;
    if(upper) ans++;
    if(lower) ans++;
    if(special) ans++;
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