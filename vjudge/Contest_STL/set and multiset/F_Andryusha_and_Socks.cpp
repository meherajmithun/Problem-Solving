#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n; cin >> n;
    map<int,vector<int>>mp;
    int ans = 0;
    for(int i=0; i<2*n; i++){
        int a; cin >> a;
        mp[a]++;
        if(mp[a].size() == 2){
            int x = mp.size();
            ans = max(ans,x);
            mp[a].clear();
        }
    }
    cout<<ans<<endl;
}