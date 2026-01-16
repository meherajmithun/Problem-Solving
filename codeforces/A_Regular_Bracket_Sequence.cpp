// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;

void solve(){
    string s; cin>>s;
    int n = s.size();
    queue<char>q;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(') q.push(s[i]);
        else if(s[i] == '?'){
            if(q.empty()){
                q.push('(');
            }
            else if(i != n-1 and s[i+1] != ')'){
                q.push('(');
            }
            else q.pop();
        }
        else {
            if(q.empty()){
                cout<<"NO\n";
                return;
            }
            q.pop();
        }
    }
    if(q.empty()) cout<<"YES\n";
    else cout<<"NO\n";
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}