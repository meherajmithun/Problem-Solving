#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        ll n = (ll)s.size();
        ll ans = 0, cnt =0;
        for(int i=0; i<n; i++){
            if(s[i] == '+') cnt++;
            else cnt--;
            
            if(cnt == -1){
                ans += (i+1);
                cnt++;
            }
        }
        if(cnt>=0) ans += n;
        cout<<ans<<'\n';
    }
}