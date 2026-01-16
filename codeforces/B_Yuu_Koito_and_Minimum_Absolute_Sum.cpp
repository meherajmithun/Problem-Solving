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
    vector<int>v(n);
    for(auto &a : v) cin>>a;

    int a = v[0],b=v[n-1];
    if(a==-1 and b == -1) {a=0,b=0;}
    else if(a==-1) a=b;
    else if(b==-1) b=a;
    v[0]=a, v[n-1]=b;  
    int sum = abs(v[0]-v[n-1]);

    // for(int i=1; i<n; i++){
    //     sum += (v[i]-v[i-1]);
    // }
    // if(sum<=0){
    //     cout<<"0\n";
    //     for(auto a : v) cout<<a<<" "; cout<<nl; return;
    // }
    // // print(sum); return;

    // for(int i=0; i<n; i++){
    //     if(v[i]==0) v[i] = sum ; break;
    // }
    print(sum);
    for(auto a : v) {
        if(a==-1) cout<<"0 ";
        else cout<<a<<" ";
    
    }
    cout<<nl;

}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}