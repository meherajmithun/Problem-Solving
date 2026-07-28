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
#define all(a) (a).begin(),(a).end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

void solve() {
   int n ; cin >> n;
   int ans ; int cnt = 0;
   int x = n % 10;
   if(x  == 1){
    ans = ((x-1) * 10) ;
    while( n > 0){
        n = n / 10;
        cnt++;
    }
    int k = (cnt * (cnt+1))/2;
    ans += k;
   }
    else if(x  == 2){
    ans = ((x-1) * 10) ;
    while( n > 0){
        n = n / 10;
        cnt++;
    }
    int k = (cnt * (cnt+1))/2;
    ans += k;
   }   
   else if(x  == 3){
    ans = ((x-1) * 10) ;
    while( n > 0){
        n = n / 10;
        cnt++;
    }
    int k = (cnt * (cnt+1))/2;
    ans += k;
   }  
   else if(x  == 4){
    ans = ((x-1) * 10) ;
    while( n > 0){
        n = n / 10;
        cnt++;
    }
    int k = (cnt * (cnt+1))/2;
    ans += k;
   }   
   else if(x  == 5){
    ans = ((x-1) * 10) ;
    while( n > 0){
        n = n / 10;
        cnt++;
    }
    int k = (cnt * (cnt+1))/2;
    ans += k;
   }   
   else if(x  == 6){
    ans = ((x-1) * 10) ;
    while( n > 0){
        n = n / 10;
        cnt++;
    }
    int k = (cnt * (cnt+1))/2;
    ans += k;
   } 
   else if(x  == 7){
    ans = ((x-1) * 10) ;
    while( n > 0){
        n = n / 10;
        cnt++;
    }
    int k = (cnt * (cnt+1))/2;
    ans += k;
   }   
   else if(x  == 8){
    ans = ((x-1) * 10) ;
    while( n > 0){
        n = n / 10;
        cnt++;
    }
    int k = (cnt * (cnt+1))/2;
    ans += k;
   }   
   else if(x  == 9){
    ans = ((x-1) * 10) ;
    while( n > 0){
        n = n / 10;
        cnt++;
    }
    int k = (cnt * (cnt+1))/2;
    ans += k;
   }



   
   cout<<ans<<endl;
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