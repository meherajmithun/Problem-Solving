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
    int start=-1;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            start = i;
            break;
        }
    }   
    int end = -1;
    for(int i=n-1; i>=0; i--){
        if(s[i] == '1'){
            end = i;
            break;
        }
    }
    if(start == -1 or end == -1){
        cout<<"0\n";
        return;
    }
    int cnt = 0;
    for(int i=start; i<end; i++){
        if(s[i] == '0') cnt++;
    }
    cout<<cnt<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}