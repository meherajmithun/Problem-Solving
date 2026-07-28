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
    string s; cin >> s;
    int n = s.size();

    int l = -1 , r = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            l = i , r = i;
            break;
        }
    }
    if(l == -1 ){
        cout<<0<<endl;
        return ;
    }
    int cnt = 0;
    while(r < n){
        r++;
        if(s[r] == '0'){
            cnt += (r-l+1);
           // r++;
            l++;
        }
    }
    cout<<cnt<<endl;
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
