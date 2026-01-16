#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    for(int i=0; i<n; i++){
        if(s[i] == 'n' and s[i+1] == 'a'){
            cout<<"nya";
            i++;
        }
        else{
            cout<<s[i];
        }
    }
}
int main(){
    fast();
    int tc = 1; ///cin >> tc;
    while(tc--){
        solve();
    }
}