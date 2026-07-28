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
    vi v(n);
    for(auto &u : v) cin >> u;
    int sum = 0;
    if(n == 2){
        cout<<-1*(v[1]+v[0])<<endl;
        return;
    }   
    int save = -1;
    bool ekbar = true;
    for(int i =0; i < n; i++){
        if(v[i] == -1 and ekbar == true){
            if(v[i+1] == -1){
                ekbar = false;
                sum += abs(abs(v[i])+abs(v[i+1]));
                i++;
                ///n--;
            }
            else{
                sum += v[i];
                save = i;
            }
        }
        else{
            sum += v[i];
        }
        //cout<<sum<<endl;
    }
    if(ekbar == true and save != -1){
        if(save != 0){
            sum -= -1 * v[save];
            sum -= -1 * v[save-1];
        }
        else{
            sum -= -1 * v[save];
            sum -= -1 * v[save+1];
        }
    }
    if(save == -1 and ekbar == false){
        int x = -2;
        sum -= abs(x);
        sum -= x;
    }
    cout<<sum<<endl;

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