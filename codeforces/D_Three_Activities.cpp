//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int n; cin>>n;
    vector<pair<int,int>>v(n),v2(n),v3(n);
    
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v[i] = {a,i};
    }
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v2[i] = {a,i};
    }
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v3[i] = {a,i};
    }
    sort(v.rbegin() , v.rend());
    sort(v2.rbegin() , v2.rend());
    sort(v3.rbegin() , v3.rend());

    // for(auto u : v) cout<<u.first<<" "<<u.second<<" "; cout<<endl;
    // for(auto u : v2) cout<<u.first<<" "<<u.second<<" "; cout<<endl;
    // for(auto u : v3) cout<<u.first<<" "<<u.second<<" "; cout<<endl;
    int mx = -1;
    for(int i=0; i<min(3,n); i++){
        for(int j=0; j<min(3,n); j++){
            for(int k=0; k<min(3,n); k++){
                int a = v[i].second;
                int b = v2[j].second;
                int c = v3[k].second;
                if(a != b and b!= c and a != c){
                    int sum = v[i].first+v2[j].first+v3[k].first;
                    mx = max(mx,sum);
                }
            }
        }
    }
    print(mx);

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