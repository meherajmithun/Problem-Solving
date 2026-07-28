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
    map<char,int>mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }

    bool flag = true;
    for(auto u : mp){
        if(u.second != n){
            cout<<-1<<endl;
            return;
        }
    }
    sort(s.begin() , s.end());
    int m = s.size();
    for(int i = 0 , j = m-1; i < m/2;j--,  i++){
        cout<<s[i]<<s[j];
    }
    if(m % 2 != 0) cout<<s[m/2];

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