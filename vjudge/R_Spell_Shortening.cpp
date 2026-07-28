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
    string tmp = s;
    string res;
    sort(all(tmp));
    char x = tmp[n-1] ;
    char y = tmp[n-2];
    int idx1 = -1,idx2 = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == x and idx1 == -1){
            idx1 = i;
        }
        else if(s[i] == y and idx2 == -1){
            idx2 = i;
        }
    }
    int kaj = min(idx1,idx2);
    char c = s[kaj];
    bool visit = false,visit2 = false;
    for(int i = 0; i < n; i++){
        if(s[i] == c and visit == false){
            visit = true;
        }
        else{
            res.pb(s[i]);
        }
    }   
    cout<<res<<endl;
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