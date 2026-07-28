#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        int i=1 , ans = -1;
        map<int,int>mp;
        while(n--){
            int x; cin>>x;
            mp[x] = i++;
        }
        //for(auto u : mp) cout<<u.first<<" "<<u.second<<endl;
        for(auto u : mp){
            for(auto q : mp){
                if(__gcd(u.first , q.first) == 1){

                    // cout<<u.second<<" "<<q.second<<endl;
                    ans = max(ans, u.second + q.second);

                    //cout<<ans<<endl;
                
                }
            }
        }
        cout<<ans<<endl;

    }
}
