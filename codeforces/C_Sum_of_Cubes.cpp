#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << " ";
ll n,a; 
int call(ll idx){
    ll baki = n-a;
    if(idx*idx*idx <= baki) return 0;
    else return 1;
}

void solve(){
    cin>>n;
    if(n == 1){
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=1; (i*i*i) <= n; i++){
        a = i*i*i;
        ll l = 1,r=1e4 , val=-1;
        while(l <= r){
            ll mid = (l+r)/2;
            if(call(mid) == 0){
                val = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        if(a + (val*val*val) == n){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}