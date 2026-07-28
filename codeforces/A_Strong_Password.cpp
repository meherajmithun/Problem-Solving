#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    int n = (int)s.size();
    if(n == 1){
        cout<<s;
        s[0]++;
        cout<<s<<endl;
        return;
    }
    char c = s[n-1];
    c++;
    string ans = s+c;
    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]){
            swap(ans[i+1] , ans[n]);
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}