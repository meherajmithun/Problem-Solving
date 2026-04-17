#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s; cin>>s;
    cout<<s<<endl;
    char c = 'a';
    for(int i=0; i<26; i++){
        char a = c;
        int flag = 1;
        for(int j=0; j<s.size(); j++){
            if(s[j]==a){
                flag = 0;
                break;
            }
        }
        if(flag==1){
            cout<<a<<endl;
            return;
        }
        c++;
        // cout<<flag<<a;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}