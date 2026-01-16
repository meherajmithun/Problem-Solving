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
    int n ; cin >> n;
    vi v(n);
    vi v2(n);
    for(int i=0 ; i<n; i++){
        cin >> v[i];
        v2[i] = v[i];
    }
    if(n == 1){
        cout<<0<<endl;
        return;
    }
    int x = v[0], l;
    int cntl = 0 , cntr = 0;
    if(v[n-1] == v[0]){
        if(is_sorted(all(v2))){
            int x = unique(all(v2))-v2.begin();
            if(x == 1){
                cout<<0<<endl;
                return;
            }
        }
        for(int i = 1; i < n; i++){
            //cntl++;
            if(v[i] != x){
                l = i;
                break;
            }
        }
        int y = v[n-1];
        int r = n-2;
        while(r >= l){
            //cntr++;
            if(y != v[r]){
                break;
            }
            else{
                r--;
            }
        }
        cout<<(r-l+1)<<endl;
        }
    else{

        for(int i = 1; i < n; i++){
            cntl++;
            if(v[i] != x){
                l = i;
                break;
            }
        }
        int y = v[n-1];
        int r = n-1;
        while(r >= l){
            
            if(y != v[r]){
                break;
            }
            else{
                cntr++;
                r--;
            }
        }
        //cout<<cntl<<" "<<cntr<<endl;
        if(cntl > cntr){
            cout<<n-cntl<<endl;
        }
        else{
            cout<<n-cntr<<endl;
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