//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    if(n == 1){
        print(1);
        return;
    }
    int cnt=0,sum=0,product=1;
    int l=0,r=0;
    while(r<n){
        cout<<sum<<" "<<product<<" "<<cnt<<endl;

        cnt++;
        sum += v[r];
        product *= v[r];
        if(sum == product) cnt++;
        bool f = 0;
        while(sum != product and l<=r){
       //     cout<<sum<<" "<<product<<endl;
            sum -= v[l];
            product /= v[l];
            l++;
            f = 1;
        }
        // if(sum < 0) sum = 0;
        // if(product <= 0) product = 1;
        // if(sum == product and f == 1) cnt++;
        //cout<<sum<<" "<<product<<" "<<cnt<<endl;
        r++;
    } 
    // while(l<r){
    //     sum -= v[l];
    //     product /= v[l];
    //     l++;
    //     if(sum == product) cnt++;
    // }  
    //if(sum == product) cnt++;
    //cnt += n;
    print(cnt);
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}