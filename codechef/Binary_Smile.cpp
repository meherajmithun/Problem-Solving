#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    string a,b; cin>>a>>b;
    vector<int>p1,p2;
    for(int i=0; i<n; i++){
        if(a[i]=='1') p1.push_back(i);
        if(b[i]=='1') p2.push_back(i);
    }
    if(p1.size()!=p2.size()){
        cout<<"-1\n"; return;
    }
    int cnt = 0;
    for(int i=0; i<(int)p1.size(); i++){
        if(p1[i]!=p2[i]) cnt++;
    }
    cout<<cnt<<endl;

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