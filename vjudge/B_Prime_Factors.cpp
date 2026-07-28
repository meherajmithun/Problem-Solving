//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    while(1){
        int n; cin>>n;
        if(n == 0) return ;
        cout<<n<<" = ";
        if(n<0){
            cout<<"-1 x ";
            n *= -1;
        }
        vector<int>ans;
        for(int i=2; (i*i) <= n; i++){
            while(n%i == 0){
                ans.push_back(i);
                n /= i;
            }
        }
        if(n>1) ans.push_back(n);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i];
            if(i != ans.size()-1){
                cout<<" x ";
            }
        }
        cout<<endl;
    }
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