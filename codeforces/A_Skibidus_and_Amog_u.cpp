#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    string s; cin >> s;
    for(int i=0; i<(int)s.size()-2; i++){
        cout<<s[i];
    }
    cout<<'i'<<endl;
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}