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
#define double long double;

void solve() {
    int n ; cin >> n;
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    while(n > 0){
        cout<<n<<" ";
        int x = n;
        bool paisi = true;
        for(int i = n-1; i  > 1; i--){
            if(n % i == 0){
                paisi = false;
                n = i;
                break;
            }
        }
        if(paisi){
            cout<<1<<endl;
            return;
        }
    }
}

int32_t main(){
    int tc = 1;
    while(tc--){
        solve();
    }
}