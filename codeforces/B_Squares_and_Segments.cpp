#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ln '\n'
#define print(x) cout << x << endl

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    slow();
    ll n; cin >> n;
    ll ans = INT_MAX;
    for(int i=1; (i*i) <= n; i++){
        ans = min(ans,i+(n+i-1)/i);
    }
    print(ans);
}