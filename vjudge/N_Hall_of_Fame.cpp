#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int idx=-2, ans=1;
    for(int i=0; i<n-1; i++){
        if(s[i] == 'L' and s[i+1] == 'R') idx=i;
        else if(s[i] == 'R' and s[i+1] == 'L') ans=0;
    }
    cout<<ans*(idx+1)<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}
