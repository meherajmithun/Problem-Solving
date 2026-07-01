#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    for(int t=0; t<=k; t++){
        int red = t;
        int blue = k-red;
        // cout<<blue<<" "<<red<<endl;
        for(auto a : v){
            if(a>0){
                red += a;
                blue -= a;
            }
            else{
                blue += abs(a);
                red -= abs(a);
            }
            if(blue<0 or red<0) break;
        }
        // if(t==0) cout<<red<<" "<<blue<<endl;
        if(blue>=0 and red>=0){
            cout<<"Yes\n"; return;
        }
    }
    cout<<"No\n";
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