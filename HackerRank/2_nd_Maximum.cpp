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
///#define int long long
#define double long double
#define mod 1000000007

void solve() {
    int n ; cin >> n;
    vi v(n);
    for(auto &u : v) cin >> u;
    int val = *max_element(all(v));
    int a = -1, indx = -1;
    for(int i = 0; i < n; i++){
        if(v[i] < val){
            a = max(a,v[i]);
            //indx = max(indx,i);
        }
    }
    if(a == -1){
        cout<<"Value : "<<a<<endl<<"Index : "<<indx<<endl;
    }
    else{
        for(int i = 0; i < n; i++){
            if(v[i] == a){
        cout<<"Value : "<<a<<endl<<"Index : "<<i<<endl;
        return;
            }
        }
    }
}

int32_t main() {
    slow;
    int tc = 1;
 //   cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}