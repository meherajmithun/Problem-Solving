#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin>> n;
    vector<string>s(n);
    map<string,bool>mp;
    for(int i=0; i<n; i++){
        cin >> s[i];
        mp[s[i]] = 1;
    }
    for(int i=0; i<n; i++){
        int ans = 0;
        string s3 = "";
        string s2 = s[i];
        int k = s2.size();
        while(k){
            k--;
            s3 += s2[0];
            s2.erase(s2.begin());
            ans |= mp.count(s2) and mp.count(s3);
        }
        cout<<ans;
    }
    cout<<endl;
}

int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}