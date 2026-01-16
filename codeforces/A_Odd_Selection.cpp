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
    int n,k; cin>>n>>k;
    int odd=0,even=0;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        odd += (v[i]&1);
        even += !(v[i]&1);
    }  
   // cout<<even<<" "<<odd<<endl;
    for(int i=1; i<=odd and i<=k; i+=2){
        int a = even;
        int lagbe = k-i;
        if(lagbe <= even){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
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