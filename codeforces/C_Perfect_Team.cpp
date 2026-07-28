#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << '\n';
void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

void call(){
    ll c,m,s; cin>>c>>m>>s;
    ll n = c+m+s;
    ll l = 0 , r = n/3+1;
    while(l+1 < r){
        ll mid = (l+r)/2;
        if(mid <= c and mid <= m and 3*mid <= n){
            l = mid;
        }
        else r = mid;
    }
    print(l);
}

int main(){
    slow();
    int query; cin >> query;
    while(query--){
        call();
    }
}
