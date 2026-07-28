#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

bool cmp(pair<int,int> m, pair<int,int> n ){
    return m.second<n.second;
}

void solve() {
    int n, k;
    cin>>n >>k;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        mp[x]++;
    }

    int cnt=0;
    vector<pair<int, int>> freq(all(mp));
    sort(all(freq), cmp);
    for(auto it : freq){
        if(k==0 || cnt == mp.size()) break;
        if(it.second <= k) k-=it.second , cnt++;
    }
    if(mp.size() - cnt == 0) {
        cout<<1<<endl;
        return;
    }
    cout<< mp.size() - cnt <<endl;   
}

int32_t main() {
    optimize();
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}