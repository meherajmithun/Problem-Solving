#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    ll a,b; cin >> a >> b;
    if(a == 0 or b == 0){
        cout<<0<<endl;
        return;
    }
    if(a == b){
        ll f1 = a/2, f2= b/2;
        ll ans = f1+f2;
        cout<<(ans/2)<<endl;
    }
    if(a > b){
        if(b == 1 and a > 4){
            cout<<1<<endl;
        }
        else if(b == 2 and a > 3){
            cout<<2<<endl;
        }
        else if(a < 4){
            cout<<1<<endl;
        }
        else{
    
            ll ans = b/2;
            if(ans % 2 != 0) ans++;
            cout<<(ans)<<endl;
        }
    }

    if(a < b){
        if(a == 1 and b > 4){
            cout<<1<<endl;
        }
        else if(a == 2 and b > 3){
            cout<<2<<endl;
        }
        else if(b < 4){
            cout<<1<<endl;
        }
        else{
            ll ans = a/2;
            if(ans % 2 != 0) ans++;
            cout<<(ans)<<endl;
        }
    }
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}