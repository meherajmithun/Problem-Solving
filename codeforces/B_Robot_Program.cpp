#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x,k;  cin>>n>>x>>k;
    string s; cin>>s;
    bool there = false;
    for(int i=0; i<n; i++){
        if(s[i] == 'L') x--;`1  `
        else x++;
        k--;
        if(x == 0){
            there = true;
            break;
        }
        if(k == 0){
            cout<<"0"<<'\n';
        }
    }
    if(!there){
        cout<<0<<'\n';
        return;
    }
    int time = 1;
    int cnt = 0;
    there = false;
    for(int i=0; i<n; i++){
        if(s[i] == 'L') x--;
        else x++;
        cnt++;
        if(x == 0){
            time += k/cnt;
            cout<<time<<'\n';
            return;
        }
    }

    cout<<time<<'\n';

}


int32_t main(){
    int tc;    cin>>tc;
    while(tc--){
        solve();
    }
}