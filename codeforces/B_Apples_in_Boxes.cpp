//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define mod 1000000007

void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
    }
    sort(v.begin() , v.end());
    if(v[n-1]-v[0]-1 > k){
        cout<<"Jerry"<<endl;
    }   
    else if(v[n-1]-v[0]-1 == k and v[n-1] == v[n-2]){
        cout<<"Jerry"<<endl;
    }
    else{
        if(sum % 2 == 1) cout<<"Tom"<<endl;
        else cout<<"Jerry\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}