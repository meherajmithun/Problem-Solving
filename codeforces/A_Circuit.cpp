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
    int n ; cin >> n;
    vector<int>v(2*n);
    for(int i = 0; i < 2*n; i++) cin >> v[i];
    int cnt0 = 0 , cnt1 = 0;
    for(int i = 0; i < 2*n; i++){
        if(v[i] == 0) cnt0++;
        else cnt1++;
    }
    if(n == 1){
        if(cnt0 == 2 or cnt1 == 2) cout<<0<<" "<<0<<endl;
        else{
            cout<<1<<" "<<1<<endl;
        } 
        return ;
    }
    cout<<cnt1%2<<" "<<min(cnt1,2*n-cnt1)<<endl;
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