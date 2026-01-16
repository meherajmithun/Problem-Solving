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
#define double long double;

void solve() {
    int n,k ; cin >> n >> k;
    vi v;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;
        if(a > k){
            v.pb(i+1);
        }
    }   
    if(v.size() == 0){
        cout<<"FE!N"<<endl;
    }
    else{
        cout<<v.size()<<endl;
        for(auto u : v) cout<<u<<" ";
        cout<<endl;
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