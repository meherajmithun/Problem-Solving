#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<'\n';

void solve(){
    int n; cin >> n;
    if(n < 3){
        cout<<(n+1)<<'\n';
        return;
    }
    if(n == 15){
        cout<<4<<'\n';
        return;
    }
    // cout<<(n/15)*3<<" "<<min(n%15 , 3)<<endl;
    int ans = n/15;
    ans *= 3;
    ans += min(n%15+1 , 3);

    print(ans);

}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}