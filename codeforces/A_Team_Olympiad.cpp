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

int32_t main() {
    control;
    int n ; cin >> n;
    int a;
    vi p,m,s;

    for(int i = 1; i <= n; i++){
        cin >> a;
        if(a == 1){
            p.pb(i);
        }
        else if(a == 2){
            m.pb(i);
        }
        else if(a == 3){
            s.pb(i);
        }
    }
    int ans = min(s.size(),min(p.size(),m.size()));

    cout<<ans<<endl;
    for(int i = 0; i < ans; i++){
        cout<<p[i] <<" "<<m[i]<<" "<<s[i]<<endl;
    }

}