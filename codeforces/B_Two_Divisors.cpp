// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;
const int N = 10007;
vector<int>divisor[N+12];
void harmonic(){
    for(int i=1; i<N; i++){
        vector<int>tmp;
        for(int j=i; j<N; j+=i){
            tmp.push_back(j);
        }
        divisor[i]=tmp;
    }

    for(int i=1; i<11; i++){
        cout<<i<<" -> ";
        cout<<sz(divisor[i])<<nl;
    }
}

void solve(){
    int a,b; cin>>a>>b;
    // cout<<__gcd(a,b)<<" "<<a<<" "<<b<<nl;
    int k = a*b;
    // cout<<k<<nl;
    int g = __gcd(a,b);
    int s = k;
    if(a==1 or b==1){
        int u = 1;
        while(u==1){
            s += k;
            cout<<s<<nl;
            // for(int i=divisor[s].size()-1; i>0; i--){
            //     int t = divisor[s][i];
            //     cout<<t<<" ";
            //     if(t==b and divisor[s][i-1]==a){
            //         cout<<s<<nl; return;
            //     }
            // }
            for (int i = divisor[s].size() - 1; i >= 0; i--) {
                cout << divisor[s][i] << " ";
            }

            // cout<<s<<" ";
            u++; if(u==100) break;
        }
    }


}

int32_t main(){
    fast
    harmonic();
    int tc=1; cin >> tc;
    while(tc--){
        solve();
    }
}