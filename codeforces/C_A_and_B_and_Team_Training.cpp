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
#define all(a) (a).begin(),(a).end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

int main() {
    fastIO;
    int n , m;
    cin >> n >> m;
    int ans = 0;
    while (n > 0 && m > 0) {
        if (n > m) {

            n -= 2;
            m -= 1;
        } 
        else {
            n -= 1;
            m -= 2;
        }
        
        if (n >= 0 && m >= 0) {
            ans++;
        }
    }
    cout << ans << endl;
}