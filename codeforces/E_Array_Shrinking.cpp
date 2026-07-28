//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define ll long long
const ll N = (ll) 3e7+5;
const ll mod = (ll) 1e9+7;
const ll inf = (ll) 1e18;
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
int n; cin>>n;
        queue<int>q;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            q.push(x);
        }
        q.push(-10);
        int z=0, a, b;
        a=q.front(); q.pop();
        b=q.front(); q.pop();
        while (z<=q.size()){
            z++;
            // cout<<z<<" - ";
            // cout<<a<<" "<<b<<" - ";
            while(a==b){
                z=0;
                a++;
                b=q.front(); q.pop();
            }
            q.push(a);
            // cout<<a<<" "<<b<<nl;
            a=b;
            b=q.front(); q.pop();
            // if(!z) cout<<nl;
        }
        cout<<q.size()+1<<endl;
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