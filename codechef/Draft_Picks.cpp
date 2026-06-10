#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k; cin>>n>>k;
    vector<int>v(n);
    int f = 0;
    while(k>0){
        if(!f){
            for(int i=n-1; i>=0; i--){
                v[i] += k; k--;
                if(k==0) break;
            }
        }
        else{
            for(int i=0; i<n; i++){
                v[i] += k; k--;
                if(k==0) break;
            }
        }
        f ^= 1;
    }
    // for(auto a : v) cout<<a<<" "; cout<<endl;
    sort(v.begin() , v.end());
    cout<<v[n-1]<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}