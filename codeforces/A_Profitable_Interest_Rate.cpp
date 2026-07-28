//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
#define solo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) (v).begin(), (v).end()
#define pb push_back
const int MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    ll a , b ;
    cin >> a >> b;
    if(a >= b){
        cout<<a<<endl;
        return;
    }
    ll dif = b-a;
    a = a-dif;
    if(a >= abs((b-(dif*2)))){
        cout<<a<<endl;
    }
    else {
        cout<<0<<endl;
    }
}

int main() {
    solo;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}