//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define INT_MAX LLONG_MAX
#define IN_MIN LLONG_MIN
#define mod 1000000007
int mx = 150000;
vector<int>divisor;

void pre(int n){
    for(int i=2;(i*i)<=n; i++){
        if(n%i == 0){
            divisor.push_back(i);
            if(n/i != i){
                divisor.push_back(n/i);
            }
        }
    }
    // for(auto u : divisor) cout<<u<<" ";

}

void solve() {
    int n; cin>>n;
    pre(n);

    vector<int>v(n);
    for(auto &u : v) cin>>u;

    int mx = *max_element(v.begin() , v.end());
    int mn = *min_element(v.begin() , v.end());
    
    if(n <= 3){
        cout<<abs(mx-mn)<<endl;
        return;
    }   
    int ans = abs(mn-mx);
    //cout<<mx<<" "<<mn<<endl;
    for(int i=0; i<divisor.size(); i++){
        int cnt = 0,sum=0;
        int mex = INT_MIN,men = INT_MAX;
        //cout<<divisor[i]<<" ";
        for(int j=0; j<n; j++){
            sum += v[j];
            cnt++;
            
            if(cnt == divisor[i]){
                mex = max(mex,sum);
                men = min(men,sum);
                sum = 0,cnt=0;
            }
        }
        //cout<<endl;
        ans = max(ans,mex-men);
    }
     cout<<ans<<endl;
    //cout<<mx-mn<<endl;
    //cout<<endl;
    divisor.clear();
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