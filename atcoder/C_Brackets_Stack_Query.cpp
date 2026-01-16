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
    int query; cin>>query;
    char last = 'a';
    int cnt1=0,cnt2=0;
    while(query--){
        int a; cin>>a;
        if(a == 1){
            char c; cin>>c;
            last = c;
            if(c == '(') cnt1++;
            else cnt2++;
            if(cnt1 == cnt2){
                cout<<"Yes\n";
            }
            else cout<<"No\n";
        }
        else {
            if(last == '(') cnt1--;
            else if(last == ')')cnt2--;
            if(cnt1 == cnt2){
                cout<<"Yes\n";
            }
            else cout<<"No\n";
        }
    }
}

int32_t main(){
    fast
    int tc = 1;// cin >> tc;
    while(tc--){
        solve();
    }
}