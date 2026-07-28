//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int n,c; cin>>n>>c;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int cnt = 0;
    sort(v.rbegin(), v.rend());
    for(int i=0; i<n; i++){
        //if(v[i] == 0) continue;
        if(v[i] > c or v[i] == 0){
            for(int j=i; j<n; j++){
                if(v[j] <= c){
                    v[j] = 0;
                    i = j;
                    break;
                }
            }
        }
        else{
            v[i] = 0;
        }
        for(int j=0; j<n; j++) v[j] *= 2;
        //for(auto u : v) cout<<u<<" "; cout<<endl;
    }
    //for(auto u : v) cout<<u<<" "; cout<<endl;
    for(int i=0; i<n; i++){
        if(v[i] != 0 and v[i] > c) cnt++;
    }
    print(cnt);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}