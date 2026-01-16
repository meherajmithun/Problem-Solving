//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define nl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double
#define mod 1000000007

void solve() {
    int n ; cin >> n;
    int min = 1;
    int cnt = 0;
    if(n == 1){
        int x ; cin >> x;
        if(x > 0){
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
        else{
            cout<<0<<endl;
        }
        return;
    }
    bool paisi = true;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;
        if(a < 0) cnt++;
        else if(a > 0){
            paisi = false;
        }
    }   
    if(cnt % 2 != 0 and paisi){
        cout<<0<<endl;
    }
    else if(cnt % 2  == 0 and paisi){
        cout<<1<<endl;
        cout<<cnt-1<<" "<<0<<endl;
    }
    else if(!paisi){
        cout<<1<<endl<<1<<" "<<0<<endl;
    }
    else{
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
    }
}

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}