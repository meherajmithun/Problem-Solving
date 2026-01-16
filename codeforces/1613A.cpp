/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
#define control ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

void solve() {
    string a,b;
    int x,y;
    cin >> a >> x;
    cin >> b >> y;
    while(a.size() > 0 and a.back() == '0'){
        a.pop_back();
        x++;
    }
    while(b.size() > 0 and b.back() == '0'){
        b.pop_back();
        y++;
    }
    if(a.size() + x > b.size() + y){
        cout<<">"<<endl;
    }
    else if((a.size() + x) < (b.size() + y)){
        cout<<"<"<<endl;
    }
    else{
        if(a < b){
            cout<<"<"<<endl;
        }
        else if(a > b){
            cout<<">"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }

}

int32_t main() {
    control;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
