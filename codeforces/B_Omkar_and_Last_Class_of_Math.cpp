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

int check_lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}

void solve() {
    int n; cin>>n;
    vector<int>divisor;
    for(int i=1; (i*i) <= n; i++){
        if(n%i == 0){
            divisor.push_back(i);
            if(n/i != i){
                divisor.push_back(n/i);
            }
        }
    }   
    sort(divisor.begin() , divisor.end());
    //for(auto u : divisor) cout<<u<<" ";
    int ans = n;
    int a,b;
    for(int i=0; i<divisor.size()-1; i++){
        int k = n-divisor[i];
        //cout<<k<<" "<<divisor[i]<<endl;
        int lcm = check_lcm(k,divisor[i]);
        if(ans >= lcm){
            a = k,b = divisor[i];
        }
    }
    cout<<a<<" "<<b<<endl;
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