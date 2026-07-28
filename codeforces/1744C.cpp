/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
#define control ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

void solve() {
    int n ; cin >> n;
    char c ; cin >> c;
    string s ; cin >> s;
    vi pera;
    int l = 0, r = 0;
    while(r < n){
        if(s[r] == c){
            l = r;
            while(l < n){
                if(s[l] == 'g'){
                    pera.pb(abs(l-r));
                    l = 0;
                    break;
                }
                l++;
            }
            if(l != 0){
                int tmp = abs(n-r);
                l = 0;
                while(l < n){
                    if(s[l] == 'g'){
                        tmp += l;
                        pera.pb(abs(tmp));
                        l = 0;
                        break;
                    }
                    l++;
                }
            }
        }
        r++;
    }

    cout<<*max_element(all(pera))<<endl;
}

int32_t main() {
    control;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
