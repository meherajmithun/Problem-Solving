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
    int n , m , k;
    cin >> n >> m >> k;
    vi applicant(n),apar(m);
    for(auto &u : applicant) cin >> u;
    for(auto &u : apar) cin >> u;
    sort(all(apar));
    sort(all(applicant));
    // vector<bool>v (n+123,true);
    // for(auto u : applicant) cout<<u<<" ";
    // cout<<endl;    
    // for(auto u : apar) cout<<u<<" ";
    // cout<<endl;
    int cnt = 0;
    int l = 0,r = 0;
    while(l < n and r < m){
        if(applicant[l] == apar[r]){
            l++ , r++;
            cnt++;
        
        }
        else if( abs(applicant[l] - apar[r]) <= k ){
            l++;
            r++;
            cnt++;
        }
        else if(applicant[l] < apar[r]){
            l++;
        }
        else r++;
    }
    cout<<cnt<<endl;
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