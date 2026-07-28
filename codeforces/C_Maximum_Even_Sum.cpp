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
    if((a&1) and (b&1)){
        cout<<(a*b)+1<<endl;
    }   
    else if(a%2==0 and b%2==0){
        int k = (a*b)/2;
        cout<<k+2<<endl;
    }
    else if(a%2!=0 and b%2==0){
        int k  = b/2;
        if((a*k) %2==0){
            cout<<a*k+2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<-1<<endl;
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