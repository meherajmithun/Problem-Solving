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
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    vector<int>even,odd;
    for(int i=0; i<n; i++){
        if(v[i]%2 == 0) even.push_back(v[i]);
        else odd.push_back(v[i]);
    }
    // for(auto u : even) cout<<u<<" "; cout<<endl;
    // for(auto u : odd) cout<<u<<" "; cout<<endl;
    if(even.size() == 0 and n!= 1){
        cout<<"NO\n";
        return;
    }
    if(odd.size() == 0){
        cout<<"NO\n";
        return;
    }
    if(odd.size() == 1 and n == 1){
        cout<<"YES\n";
        return;
    }
    int j=0,l=0;
    vector<int>v2;
    bool f = 0;
    for(int i=0; i<n; i++){
        if(!f){
            v2.push_back(odd[j]);
            if(j != odd.size()) j++;
            f =  1;
        }
        else{
            v2.push_back(even[l]);
            if(l != even.size()) l++;
            f = 0;
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += v2[i];
        if(sum % 2 == 0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

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