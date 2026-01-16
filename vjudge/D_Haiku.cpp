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

bool isvowel(char c){
    return (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u');
}

void solve() {
    vector<int> v = {5,7,5};
    vector<string>s;
    int ans = 0;
    for(int i = 0 ; i < 3; i++){
        string a ; 
        getline(cin,a);
        s.pb(a);
        int cnt = 0;
        for(int j = 0; j < a.size(); j++){
            if(isvowel(a[j])) cnt++;
        }
        if(cnt == v[i]) ans++;
    }
    if(ans == 3) yes;
    else no;
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