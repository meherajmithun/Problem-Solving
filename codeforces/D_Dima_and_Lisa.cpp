#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(ll n){
    for(int i=2; (i*i) <= n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n; cin>>n;
    if(prime(n)){
        cout<<1<<endl;
        cout<<n<<endl;
        return 0;
    }
    cout<<3<<endl<<3<<" ";
    n -= 3;
    for(int i=3; i<=n; i++){
        if(prime(i) and prime(n-i)){
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }
}