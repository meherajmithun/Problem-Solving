// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>even,odd;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a&1) odd.push_back(a);
        else even.push_back(a);
    }   
    if(sz(odd)==0){
        for(int i=0; i<n; i++) cout<<"0 "; cout<<nl;
        return;
    }
    sort(rall(odd)); sort(rall(even));
    // for(auto a : odd) cout<<a<<" "; cout<<nl;
    // for(auto a : even) cout<<a<<" "; cout<<nl;

    vector<int>e_pre(n+1, 0);

    int x=odd[0];

    for(int i=1; i<=(int)sz(even); i++){
        e_pre[i] = e_pre[i-1]+even[i-1];
    }
    // for(auto a : e_pre) cout<<a<<" "; cout<<nl;

    int a = sz(even), b=sz(odd);
    vector<int>ans(n+1, 0);
    
    for(int i=1; i<=n; i++){
        int mx = -1;
        bool paisi=0;
        int j = min(a,i-1);
        for(; j>=0; j--){
            int k = i-j;
            // cout<<k<<" ";
            if((k&1) and k<=b and k>0){
                mx = j;
                paisi=1; break;
            }
        }
        if(paisi){
            ans[i] = x+e_pre[mx];
        }
        else ans[i]=0;
    }
    for(int i=1; i<=n; i++) cout<<ans[i]<<" "; cout<<nl;

}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}