//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

void solve() {
    int n , k ; cin >> n >> k;
    if(n == 1 and k == 1){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    if(n == k){
        cout<<-1<<endl;
        return;
    }
    if(k % 2 == 0)
    {
        cout<<3<<endl;
        cout<<1<<" "<<k<<" "<<k+1<<endl;
    }
    else
    {
        cout<<3<<endl;
        cout<<1<<" "<<k-1<<" "<<k+2<<endl;
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