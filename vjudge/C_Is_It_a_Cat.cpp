#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void optimize(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    transform(s.begin() , s.end() ,s.begin() , ::tolower);
    s.erase(unique(s.begin() , s.end()) , s.end());
    if(s == "meow") cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    optimize();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}