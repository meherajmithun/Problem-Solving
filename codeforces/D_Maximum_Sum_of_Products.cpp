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
    vector<int>a(n),b(n);
    for(auto &i : a) cin>>i;
    for(auto &i : b) cin>>i;
    int p1=0,p2=0;
    int mx = -1;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int x = a[i]*b[i];
            int y = a[j]*b[j];

            int p = a[j]*b[i];
            int q = a[i]*b[j];
            int before = x+y;
            int after = p+q;
            // cout<<x<<" "<<y<<" "<<p<<" "<<q<<nl<<after<<" "<<before<<nl;
            if(before<after and mx<abs(after-before)){
                p1=i,p2=j;
                mx = abs(after-before);
            }
        }
    }
    // cout<<p1<<" "<<p2<<nl;
    swap(a[p1],a[p2]);
    int sum = 0;
    for(int i=0; i<n; i++) sum += (a[i]*b[i]);
    print(sum);
}

int32_t main(){
    fast
    int tc=1; //cin >> tc;
    while(tc--){
        solve();
    }
}