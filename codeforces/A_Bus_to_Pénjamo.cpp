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
    int n , r ; cin >> n >> r;
    int sum = 0;
    vi v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    int vacant = (2*r) - sum ;
    int unhappy = 0;
    for(int i = 0; i < n ; i++){
        if(v[i] % 2 == 1){
            if(vacant > 0) vacant--;
            else unhappy++;
        }
    }
    cout<<sum-unhappy<<endl;
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