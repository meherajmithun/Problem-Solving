#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n,m,k;
        cin >> n >> m >> k;
        if(n > (m+k)) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}
