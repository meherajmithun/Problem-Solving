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
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

void solve() {
   int a,b,c,d;
   cin >> a >> b >> c >> d;
   if( a < b && a < c && c < d && b < d){
    yes;
    return ;
   }
   else {
    if((a > b) || (a > c) || ( c > d) || (b > d)){

        int ta=a,tb=b,tc=c,td=d;
        a=tc,b=ta,c=td,d=tb;

        if((a > b) || (a > c) || ( c > d) || (b > d)){

            ta=a,tb=b,tc=c,td=d;
            a=tc,b=ta,c=td,d=tb;

            //cout<<a<<b<<c<<d<<endl;;

            if((a > b) || (a > c) || ( c > d) || (b > d)){

                ta=a,tb=b,tc=c,td=d;
                a=tc,b=ta,c=td,d=tb;

                if((a > b) || (a > c) || ( c > d) || (b > d)){
                    
                    no;
                    return ;
                }
            }
        }
    }
   }
   yes;    
}
int main() {
    fastIO;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}