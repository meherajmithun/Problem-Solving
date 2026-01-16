#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout<< x << '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

///3 5 5 7 8 

void kecal(){
        ll n, x, t;
        cin >> n >> x >> t;
        ll z = t/x;
        ll mn = min(n-1, z);
        ll ans = (mn*(mn+1))/2;
        ans += (n-mn-1)*z;

        print(ans);
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        kecal();
    }
}