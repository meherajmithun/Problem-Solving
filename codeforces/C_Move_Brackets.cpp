#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt =0 , ans = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '(') cnt++;
        else if(s[i] == ')' and cnt > 0) cnt--;
        else ans++;
    }
    cout<<ans<<endl;
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}