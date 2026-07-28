#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    string ans;
    string s;
    getline(cin, s);
    ans += s[0];
    int f = 0;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == ' '){
            f = 1;
        }
        else if(f){
            ans += s[i];
            f = 0;
        }
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc; 
    cin >> tc;
    cin.ignore(); 
    while(tc--){
        solve();
    }
    return 0;
}