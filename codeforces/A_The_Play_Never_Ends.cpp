#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int tc; cin >> tc;
    while(tc--){
        ll n; cin >> n;
        n--;
        if(n % 3 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<'\n';
    }
}