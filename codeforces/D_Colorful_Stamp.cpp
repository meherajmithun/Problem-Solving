#include<bits/stdc++.h>
using namespace std;

void optimize(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int r=0,b=0;
    for(int i=0; i<n; i++){
        if(s[i] != 'W'){
            int b=0,r=0;
            while(i < n and s[i] != 'W'){
                if(s[i] == 'R') r++;
                else b++;
                i++;
            }
            if(b == 0 or r == 0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    optimize();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}