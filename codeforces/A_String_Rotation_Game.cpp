#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]){
            int c=1;
            for(int j=0; j<=i; j++){
                if(s[j]!=s[j+1]) c++;
            }
            for(int j=i+1; j<n; j++){
                if(s[j]!=s[j+1]) c++;
            }
            if(s[0]==s[n-1]) c--;
            cout<<c<<'\n'; return;
        }
    }
    cout<<n<<'\n';
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}