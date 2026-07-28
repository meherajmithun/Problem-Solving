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
    vector<int>v(n+1);
    v[0]=1;
    for(int i=1; i<=n; i++) cin>>v[i];

    vector<int>t1=v, t2=v;
    t1.erase(t1.begin()); t2.erase(t2.begin());
    // for(auto a : t1) cout<<a<<" "; cout<<nl;
    sort(rall(t2));
    if(t1==t2){
        int sum = 0;
        for(auto a : t1) sum += a;
        print(sum); return;
    }


    int ans = 0;

    for(int i=n; i>0; i--){
        int x = v[i];
        int y = v[i]*2;
        int z = v[i-1]*2;
        if(x>y and x>z){
            ans += x; continue;
        }
        if(y>z and y>x){
            ans+=y; i--;
        }
        else{
            ans += z;
             i-=2;
        }
    }   
    print(ans);
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}