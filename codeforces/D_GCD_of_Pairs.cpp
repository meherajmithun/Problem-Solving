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

bool check(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

void solve(){
    int n; cin>>n;
    vector<int>hash_a(n+1,0),hash_b(n+1,0),cnt_a(n+1,0),cnt_b(n+1,0),ans(n+1,0);
    for(int i=0; i<n; i++){
        int a; cin>>a;
        hash_a[a]++;
    }
    for(int i=0; i<n; i++){
        int a; cin>>a;
        hash_b[a]++;
    }
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            cnt_a[i] += hash_a[j];
            cnt_b[i] += hash_b[j];
        }
    }
    for(int i=1; i<=n; i++) ans[i] = (cnt_a[i]*cnt_b[i]);

    for(int i=n; i>0; i--){
        for(int j=i+i; j<=n; j+=i){
            ans[i] -= ans[j];
        }
    }
    int res=0;
    for(int i=2; i<=n; i++){
        if(check(i)){
            res += ans[i];
        }
    }
    print(res);
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}