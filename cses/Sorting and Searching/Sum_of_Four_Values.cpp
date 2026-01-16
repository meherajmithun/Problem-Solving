//  IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007
 
void solve() {
    int n,target;
    cin>>n>>target;
    vector<pair<int,int>>vp;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        vp.push_back({a,i+1});
    }
    sort(vp.begin() , vp.end());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int l=j+1,r=n-1;
            while(l<r){
                int sum = vp[i].first+vp[j].first+vp[l].first+vp[r].first;
                if(sum == target){
                    cout<<vp[i].second<<" "<<vp[j].second<<" "<<vp[l].second<<" "<<vp[r].second;
                    return;
                }
                if(sum < target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE";
 
}
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
