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
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

void solve() {
   int n ; cin >> n;
   string s;
   cin >> s;
   for(int i = 0; i < n; i++){
    if(s[i] == '?'){
        if(s[i+1] == 'R'){
            s[i] = 'B'; 
        }
        else if ( s[i+1] == 'B'){
            s[i] = 'R';
        } 
        else if (s[i+1] == '?'){
            if(s[i-1] == 'R'){
                s[i] = 'B';
            }
            else {
                s[i] = 'R';
            }
        }
    }
   }
   if(s[n-1] == '?'){
    if(s[n-2] == 'R'){
        s[n-1] = 'B';
    }
    else {
        s[n-1] = 'R';
    }
   }
   cout<<s<<endl;
}

int main() {
    fastIO;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}