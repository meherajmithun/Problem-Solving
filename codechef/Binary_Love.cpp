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
    string s; cin>>s;
    int a=0,b=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0' and s[i+1]=='1') a++;
        if(s[i]=='1' and s[i+1]=='0') b++;
    }   
    if(a==b and a>0) cout<<"Alice\n";
    else if(a>0 and b>0) cout<<"Alice\n";
    else cout<<"Bob\n";
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}