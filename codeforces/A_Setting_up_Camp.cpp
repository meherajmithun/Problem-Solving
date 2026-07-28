#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int a,b,c;
        cin >> a >> b >> c;
        int ans = a;
        int k = b/3;
        int tmp;
        bool f = true;
        if(b % 3 != 0){
            ans += b/3;
            tmp = b % 3;
            tmp += c;
            if(tmp < 3){
                cout<<-1<<'\n';
                f = false;
            }
            else{
                ans += tmp/3;
                if(tmp % 3 != 0) ans++;
            }
        }
        else{
            ans += b/3;
            ans += c/3;
            if(c % 3 != 0) ans++;
        }
        if(f){
            cout<<ans<<'\n';
        }
    }
}