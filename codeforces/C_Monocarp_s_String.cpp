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
    for(auto u : s){
        if(u == 'a') a++;
        else b++;
    }    
    if(a == b) {
        cout<<"0\n";
        return;
    }
    int ans = INT_MAX;
    bool paise = 0;
    int beshi = a-b;
    int pref[n+1] = {0};
    for(int i=1; i<=n; i++){
        char c = s[i-1];
        int val;
        if(c == 'a') val = 1;
        else val = -1;
        pref[i] = pref[i-1]+val;
    }
    
    map<int,int>mp;
    mp[0] = 0;
    for(int i=1; i<=n; i++){
        int lagbe = pref[i]-beshi;
        if(mp.count(lagbe)){
            ans = min(ans,i-mp[lagbe]);
            paise = 1;
        }
        mp[pref[i]] = i;
    }
    if(!paise or ans == n) ans = -1;
    print(ans);
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}
