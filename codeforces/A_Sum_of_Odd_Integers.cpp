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
const int mx = 1e7+123;
vector<int>odd;
void call(){
  for(int i=1; i<=mx; i+=2){
    odd.push_back(i);
  }
}

void solve() {
    int n,k; cin>>n>>k;
    int sum = 0;
    int sz = odd.size();
    int limit = min(sz,k);
    // for(int i=0; i<limit; i++){
    //   sum += odd[i];
    // }
    sum = (k*k);
    if(sum>n){
      cout<<"NO\n";
    }
    else if((n&1) and !(k&1)){
      cout<<"NO\n";
    }
    else if(!(n&1) and (k&1)){
      cout<<"NO\n";
    }
    else{
      cout<<"YES\n";
    }
}

//1 3 5 7 9 11 13 15

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    call();
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}