#include<bits/stdc++.h>
using namespace std;
#define ll long long

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    fast();
    int tc; cin >> tc;
    while(tc--){
        ll l,r; cin >> l >> r;
        if(l == 1 and r == 1){
            cout<<1<<endl;
        }
        else{
            cout<<abs(l-r)<<endl;
        }
    }
}