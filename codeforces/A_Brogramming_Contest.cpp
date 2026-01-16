#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<< x << '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    if(s[0] == '1') cnt++;
    for(int i=1; i<n; i++){
        if(s[i] != s[i-1]) cnt++;
    }
    print(cnt);
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}