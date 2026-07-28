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
#define double long double;

void call(vector<int>v , int n){
    for(int i = 0; i < n/10; i++){
        if(i == 0){
            v[i] = 10;
        }
        else{
            v[i] = v[i-1]*10;
        }
    }
}

void solve() {
    int n ; cin >> n;
    vl v;
    call(v,n);   
    for(int i = 0; i < n; i++){
        if(v[i] > n){
            cout<<n-v[i]<<endl;
            return;
        }
    }
}

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}