//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007
const int mx = 1e5+123;
vector<int>v;

void pre_calculate(){
    v.push_back(0);
    for(int i=1; i<=1e6+123; i++){
        int tmp = i,sum = 0;
        
        while(tmp>0){
            sum += (tmp%10);
            tmp /= 10;
        }
        v.push_back(v[i-1]+sum);
    }
}

void solve() {
    int n; cin>>n;
    print(v[n]);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);     
    int tc = 1; cin >> tc;
    pre_calculate();
    while (tc--) {
        solve();
    }
    return 0;
}
