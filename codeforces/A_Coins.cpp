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

string solve(){
    ll n, k;
    cin >> n >> k;
    
    if (n == k) {
        return "YES";
    }
    
    if (n % 2 == 0) {
        return "YES";
    }
    
    if ((n - k) % 2 == 0 && (n - k) >= 2) {
        return "YES";
    }
    
    return "NO";
}
int main(){
    int T;
    cin >> T;
    while(T--){
       cout << solve() <<endl;
    }
}