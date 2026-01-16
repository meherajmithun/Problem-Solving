#include<iostream>
///#include<math>
using namespace std;

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    int a,b;
    bool f=true;
    cin >> a >> b;
    while(k--){
        int x,y;
        cin >>x >> y;
        int tmp = abs(a-x)+abs(b-y);
        if(tmp % 2 == 0 ) f = false;
    }
    if(f) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}