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
const int N = 3e5+123;
bitset<N>isprime;

void solve() {
    int n; cin>>n;
    for(int i=3; i<=n; i+=2){
        isprime[i] = 1;
    }
    isprime[2] = 1;
    for(int i=3; (i*i)<=n; i+=2){
        for(int j=(i*i); j<=n; j +=(2*i)){
            isprime[j] = 0;
        }
    }
    vector<int>prime;
    prime.push_back(2);
    for(int i=3; i<=n; i+=2){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
    int cnt =0;
    if(n<6){
        print(cnt);
        return;
    }
    for(int i=6; i<=n; i++){
        int cnt1=0;
        int k = i;
        for(int j=0; j<prime.size(); j++){
            if(i%prime[j] == 0){
                cnt1++;
            }
            if(cnt1>2){
                cnt1 = 0;
                break;
            }
        }
        if(cnt1 == 2) cnt++;
    }
    print(cnt);
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