// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int check(string &s, int n,int x){
    int left=-1,right=n;
    for(int i=x-1; i>=0; i--){
        if(s[i]=='#'){
            left=i; break;
        }
    }
    for(int i=x+1; i<n; i++){
        if(s[i]=='#'){
            right=i; break;
        }
    }
    int ans1=min(left+2,n-right+1);
    return ans1;
}

void solve() {
    int n,x; cin>>n>>x;
    string s; cin>>s;
    if(x==1 or x==n){
        cout<<"1\n"; return;
    }
    x--;
    bool f=0; string tmp = s;
    int ans1 = 0,ans2=0;
    for(int i=x+1; i<n; i++){
        if(s[i]=='.'){
            tmp[i] = '#';f=1; break;
        }
    }
    
    if(f)ans1 = check(tmp,n,x);
    f=0; tmp = s;
    // cout<<s<<" ";
    for(int i=x-1; i>=0; i--){
        if(s[i]=='.'){
            tmp[i] = '#'; f= 1;  break;
        }
    }
    if(f) ans2 = check(tmp,n,x);
    cout<<max(ans1,ans2)<<nl;
     
}

int32_t main() {
    fast
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}


