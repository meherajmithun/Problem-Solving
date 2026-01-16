#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n,m; cin>>n>>m;
    int ans = 0;
    int sum=1;
    for(int i=0; i<=m; i++){
        if(ans > 1e9 - sum){
            cout<<"inf"<<endl;
            return 0;
        }

        ans += sum;
        sum *= n;
    }
    cout<<ans<<endl;
}