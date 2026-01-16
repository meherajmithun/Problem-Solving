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
    int n = s.size();
    if(n < 2){
        cout<<1<<endl;
        return;
    }
    int ans = 0;
    bool visit = false;
    if(s[0] == s[1]){
        ans++;
        for(int i = 1; i < n-1; i++){
            if(s[i] == s[i+1]){
                ans++;
            }
        }   
        cout<<ans<<endl;
        return;
    }

    if(s[n-1] == s[n-2]){
        //cout<<"Ekhane"<<endl;
        for(int i = n-2; i > 0; i--){
            ans++;
            if(s[i] == s[i-1]){
                ans++;
            }
        }
        cout<<ans<<endl;
        return;
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