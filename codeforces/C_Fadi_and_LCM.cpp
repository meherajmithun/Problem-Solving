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
vector<int>divisor;
void div(int n){
    for(int i=1; (i*i) <= n; i++){
        if(n%i == 0){
            divisor.push_back(i);
            if(n/i != i){
                divisor.push_back(n/i);
            }
        }
    }
    sort(divisor.begin(), divisor.end());
    ///for(auto u : divisor) cout<<u<<" "; cout<<endl;
}

int l(int a,int b){
    return (a*b)/__gcd(a,b);
}

void solve() {
    int n; cin>>n;
    div(n);
    int lcm = n,a,b,mn = LLONG_MAX;
    for(int i=0; i<divisor.size(); i++){
        int k = n/divisor[i];
        //cout<<k<<" "<<divisor[i]<<" ";
        int val = l(k,divisor[i]);
        if(val == n){
            if(max(k,divisor[i]) <= mn){
                mn = max(k,divisor[i]);
                a = k,b = divisor[i];
            }
        }   
    }
    cout<<a<<" "<<b;
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