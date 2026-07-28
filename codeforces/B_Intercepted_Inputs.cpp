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

void solve() {
    int n ; cin >> n;
    vi v(n);
    for(auto &u : v) cin >> u;
    sort(all(v));
    int l = 0 , r = n-1;
    int ans = n-2;
    while(l <= r){
        int sum = v[l]*v[r];
        if(sum > ans){
            r--;
        }
        else if(sum < ans){
            l++;
        }
        else{
            cout<<v[l]<<" "<<v[r]<<endl;
            return;
        }
    }  
    //cout<<l+1<<" "<<l+1<<endl; 
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