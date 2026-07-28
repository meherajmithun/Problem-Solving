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
    if(n <= 2){
        cout<<"ALICE"<<endl;
        return ;
    }

    int cnt = 0;
    int x1 = 0 , x2 = 0;
    int f1 = 0 , ft = 0 , ft2 = 0;
    while(x1 < n and x2 < n){
        if(f1 == 0){
            if(ft == 0){
                x1 += 2;
                ft = 1;
            }
            else{
                ft = 0;
                x1 += 1;
            }
            f1 = 1;
            cnt++;
        }
        else{
            if(ft2 == 0){
                x2 += 2;
                ft2 = 1;
            }
            else{
                x2 += 1;
                ft2 = 0;
            }
            cnt++;
            f1 = 0;
        }
    }
    if(x1 >= n and x2 < n ){
        cout<<"ALICE"<<endl;
        return ;
    }
    else{
        cout<<"BOB"<<endl;
    }

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
