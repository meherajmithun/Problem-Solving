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
    int n , m ; 
    cin >> n >> m;
    string s ; cin >> s;

    int x = 0 , y = 0;
    if(n > 0 and m > 0){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'R' and x != n) x++;
            else if(s[i] == 'U' and y != m) y++;

            if(x == n and y == m){
                yes;
                return;
            }
        }
        no;
    }   

    else if(n < 0 and m < 0){
        for(int i =0; i < s.size(); i++){
            if(s[i] == 'L' and x != n) x--;
            else if(s[i] == 'D' and y != m) y--;

            if(x == n and y == m){
                yes;
                return;
            }
        }
        no;
    }
    else if(n > 0 and m < 0){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'R' and x != n) x++;
            else if(s[i] == 'D' and y != m) y--;

            if(x == n and y == m){
                yes;
                return;
            }
        }
        no;
    }
    else if(n < 0 and m > 0){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'L' and x != n) x--;
            else if(s[i] == 'U' and y != m) y++;
            if(x == n and y == m){
                yes;
                return;
            }
        }
        no;
    }
    else{
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'L' and x != n and n < 0) x--;
            else if(s[i] == 'U' and y != m and m > 0) y++;
            else if(s[i] == 'D' and y != m and m < 0) y--;
            else if(s[i] == 'R' and x != n and n > 0) x++;
                        
            if(x == n and y == m){
                yes;
                return;
            }
        }
        no;
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