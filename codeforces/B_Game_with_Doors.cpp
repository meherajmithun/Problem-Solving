#include<bits/stdc++.h>
using namespace std;
#define print(x) cout << x << '\n'

void solve(){
    int l,L,r,R;
    cin >> l >> r >> L >> R;
    int tmp1 = max(l,L);
    int tmp2 = min(r,R);
    int res = (tmp2-tmp1);
    if(res < 0){
        res = 1;
    }
    else{
        if(l != L) res++;
        if(R != r) res++;
    }
    print(res);
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}