#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define int long long
#define no (cout << "NO\n")
#define yes (cout << "YES\n")

int32_t main(){
    fastIO;
    int n; cin >> n;
    int k; cin >> k;
    string s; cin >> s;
    map<char,int>mp;
    for(char c : s) mp[c]++;
    int ans = 0;
    // for(auto [a,b] : mp) cout<<a<<" "<<b<<'\n';
    vector<pair<int,char>>vp;
    for(auto [a,b] : mp) vp.push_back({b,a});
    sort(vp.rbegin() , vp.rend());
    // for(auto [a,b] : vp) cout<<a<<" "<<b<<'\n';

    while(1){
        for(auto [a,b] : vp){
            if(k>=a) {ans += (a*a);
                k -= a;
            }
            else{
                ans += abs(k)*abs(k);
                cout<<ans<<'\n'; return 0;
            }
            if(k==0){
                cout<<ans<<'\n'; return 0;
            }
        }
    }

}