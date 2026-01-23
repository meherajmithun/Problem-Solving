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

bool prime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}


void solve(){
    int n; cin>>n;
    if(n<3) {
        cout<<"6\n" ;return ;
    }
    int a = -1, b= -1;

    if(prime(n)) {a = n , n+=2;};
    
    if(!(n&1)) n++;
    // else 
    
    for(int i=n; i<=n+540; i+=2){
        if(prime(i)){
            if(a!=-1) b = i;
            else a = i;
            if(a!=-1 and b!=-1){
                cout<<(1LL*a*b)<<nl; return;
            }
        }
    }
    
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}