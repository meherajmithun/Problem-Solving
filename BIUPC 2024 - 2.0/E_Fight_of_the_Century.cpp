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

int last_try(int h, int b, int c) {
    
    int d1 = (c - 1) * b + 2 * b;
    int d2 = c; 
    int d3 = h / d1;
    int ans = h % d1;
    
    if (ans == 0) {
        return d3 * d2;
    }
    int time = d3 * d2;
    
    if (ans <= b) {
        time += 1;
    } 
    else if (ans <= b * 2) {
        time += 2;
    }

    else {
        time += c; 
    }

    return time;
}


int32_t main() {
    slow;
    int h1, b1, c1, h2, b2, c2;
    cin >> h1 >> b1 >> c1;
    cin >> h2 >> b2 >> c2;
    
    int t1 = last_try(h2, b1, c1); 
    int t2 = last_try(h1, b2, c2);
    
    if (t1 < t2) {
        cout << "MIKE TYSON\n";
    } else if (t2 < t1) {
        cout << "JAKE PAUL\n";
    } else {
        cout << "DRAW\n";
    }
    return 0;
}