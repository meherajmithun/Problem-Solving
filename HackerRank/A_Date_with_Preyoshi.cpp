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
#define double long double
#define mod 1000000007

void solve() {
    string s , s2;
    cin >> s >> s2;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == s2[0]){
            int k = i;
            int cnt = 0;
            for(int j = 0; j < s2.size(); j++){
                if(s[i] == s2[j]){
                    cnt++;
                }
                i++;
            }
            if(cnt == s2.size()){
                cout<<"It's a Date"<<endl;
                return;
            }
            i = k;
        }
    }
    cout<<"Single e roye gelam";
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