#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
#define print(x) cout << x << '\n'
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n,k;
        cin >> n >> k;
        vector<pair<int,int>>vp(n);
        for(int i=0; i<n; i++) cin >> vp[i].second;
        for(int i=0; i<n; i++) cin >> vp[i].first;

        sort(vp.begin() , vp.end());

        ll ans = k,m=1;
        for(int i=0; i<n; i++){
            for(int j=1; j<=vp[i].second; j++){
                if(m >= n) break;
                ans += min(vp[i].first , k);
                m++;
            }
        }
        print(ans);
    }
}