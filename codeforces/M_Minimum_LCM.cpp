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

int LCM(int a,int b){
    return (a*b)/__gcd(a,b);
}

void div(int n){
    vector<int>divisor;
    for(int i=1; (i*i) <= n; i++){
        if(n%i == 0){
            divisor.push_back(i);
            if(n/i != i and i != 1) divisor.push_back(n/i);
        }
    }
    sort(divisor.begin() , divisor.end());
    int lcm = INT_MAX,ans1,ans2;
    for(int i=0; i<(int)divisor.size(); i++){
        int a = divisor[i];
        int b = n-divisor[i];
        int k = LCM(a,b);
        //cout<<a<<" "<<b<<endl;;
        if(k<=lcm){
            lcm = k;
            ans1 = a,ans2 = b;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
}

void solve() {
    int n; cin>>n;
    div(n);
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