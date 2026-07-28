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

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<bool> firstBoy(N + 1, false); 
    for (int i = 0; i < M; i++) {
        int family;
        char gender;
        cin >> family >> gender;

        if (gender == 'M') {
           
            if (!firstBoy[family]) {
                cout << "Yes" << endl;
                firstBoy[family] = true; 
            } else {
                cout << "No" << endl;
            }
        } else {
            
            cout << "No" << endl;
        }
    }

    return 0;
}
