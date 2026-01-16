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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    if(n == k){
        while(n--){
            cout<<'-';
        }
        cout<<nl;
        return;
    }
    int a=0,b=0,c=0;
    for(auto u :s){
        if(u == '0') a++;
        else if(u == '1') b++;
        else c++;
    }    
    vector<char>ans(n, '+');
    for(int i=0; i<a; i++) ans[i] = '-';
    for(int i=n-1; i>=n-b; i--) ans[i] = '-';
    //for(int i = n-b-1; i>=a; i--) ans[i] = '?';
    int i = a,x=c;

    while(c--){
        ans[i] = '?';
        i++;
    }
    i = n-b-1;
    while(x--){
        ans[i] = '?';
        i--;
    }
    for(auto u : ans) cout<<u; cout<<nl;    
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}
