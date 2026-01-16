//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define mod 1000000007

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    if(s == "AB"){
        cout<<"Alice"<<endl;
        return;
    }
    if(s == "BA"){
        cout<<"Bob"<<endl;
        return;
    }
    int a=0,b=0;
    for(int i=0; i<n; i++){
        if(s[i] == 'A') a++;
        else b++;
    }
    if(b<2) {
        cout<<"Alice"<<endl;
        return;
    }

    if(a<2) {
        cout<<"Bob"<<endl;
        return;
    }

    else if((s[0] == 'A' or s[n-2] == 'A') and s[n-1] == 'A'){
        cout<<"Alice"<<endl;
        return;
    }
    else cout<<"Bob"<<endl;
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