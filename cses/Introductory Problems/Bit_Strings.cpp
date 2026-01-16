#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    int n; cin>>n;
    ll ans = 2;
    for(int i=1; i<n; i++){
        ans *= 2;
        ans %= 1000000007;
    }
    cout<<ans<<endl;
}