//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int left=v[0],right=v[n-1],l=0,r=n-1,mx = 0;
    int a=1,b=1;
    while(l<r){
        if(left<right){
            a++;l++;
            left += v[l];
        }
        else if(right<left){
            b++;r--;
            right += v[r];
        }
        else if(left == right){
            mx = max(mx,a+b);
            a++,b++;
            l++,r--;
            left += v[l]; right += v[r];
        }
        //cout<<a<<" "<<b<<endl;
        //cout<<l<<" "<<r<<endl;
    }   
   // mx = max(mx,(a+b));
    cout<<mx<<endl;
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