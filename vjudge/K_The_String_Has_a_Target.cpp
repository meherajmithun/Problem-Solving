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
    string ans = "";
    char pos='z';
    int idx=-1;
    for(int i=0; i<n; i++){
        if(s[i] <= pos){
            pos = s[i];
            idx = i;
        }
    }
    for(int i=0; i<n; i++){
        //if(i == idx) continue;
        if(i != idx){
            ans += s[i];
        }
    }
    cout<<(pos+ans)<<endl;
}
int main(){
    optimize();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}