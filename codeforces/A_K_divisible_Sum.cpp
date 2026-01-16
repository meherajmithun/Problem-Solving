//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double;

void solve() {
    int a,b ; cin >> a >> b;
    //if(a < b) swap(a,b);
    //cout<<a << b;
        if(a == 1){
            cout<<b<<endl;
            return;
        }
        if(b == 1){
            cout<<b<<endl;
            return;
        }
    if(((a % 2 == 0) and (b % 2 == 0)) or ((a % 2 == 1) and (b % 2 == 1))){
        if(a < b){
            swap(a,b);
        }
        cout<<a/b<<endl;
    }  
    else{
        if(a<b)swap(a,b);
        cout<<(a/b)+1<<endl;
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