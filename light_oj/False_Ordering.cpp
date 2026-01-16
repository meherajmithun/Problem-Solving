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
vector<pair<int,int>>st;

void divisor(int n){
    int cnt = 0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            cnt++;
            if(n/ i != i) cnt++;
        }
    }
    st.push_back({cnt,-n});
}

void solve() {
    int n; cin>>n;
    cout<<-st[n-1].second<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    for(int i=1; i<=1000; i++){
        divisor(i);
    }
    sort(st.begin() , st.end());
    int c = 1;
    int tc = 1; cin >> tc;
    while (tc--) {
        cout<<"Case "<<c++<<": ";
        solve();
    }
    return 0;
}