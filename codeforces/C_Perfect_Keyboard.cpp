//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    string s; cin>>s;
    int n = s.size();
    map<char,int>mp;
    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]){
            cout<<"NO\n";
            return;
        }
        mp[s[i]]++;
    }
    mp[s[n-1]]++;
    if(s[0] == s[n-1] and mp[s[0]] == 2){
        cout<<"NO\n";
        return;
    }
    if(mp.size() == 26){
        cout<<"NO\n";
        return;
    }
    vector<pair<int,char>>vp;
    for(auto u : mp){
        //cout<<u.first<<" "<<u.second<<endl;
        vp.push_back({u.second,u.first});
    }
    sort(vp.begin() , vp.end());
    string ans = "";
    for(auto u : vp){
        ans += u.second;
    }
    //cout<<ans<<endl;
    //reverse(ans.begin() , ans.end());

    string s2 = ans;
    map<char,int>used;
    for(auto u : s2){
        used[u]++;
    }
    for(int i=0; i<26; i++){
        if(used[char(i+97)] == 0) s2 += char(i+97);
    }
    print("YES");
    print(s2);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}