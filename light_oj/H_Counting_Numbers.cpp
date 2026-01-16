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
    int a,b; cin>>a>>b;
    int cnt = 0;
    cout<<b-a<<endl;
    for(int i=a; i<=b; i++){
        a = i;
        int x = a%10;
        a /= 10;
        int y = a%10;
        a /= 10;
        int z = a%10;
        if(x != y and y != z ){
            cout<<x<<" "<<y<<" "<<z<<" ";
            cout<<i<<endl;
            cnt++;
        }
    }
    print(cnt);
    // while(a>0){
    //     int x = a%10;
    //     v.push_back(x);
    //     a /= 10;
    // }
    // while(b>0){
    //     int x = a%10;
    //     v.push_back(x);
    //     b /= 10;
    // }
    // for(int i=0;i )

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