/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define ll long long
#define no (cout << "NO\n")
#define yes (cout << "YES\n")

string solve() {
    int n; 
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++) cin >> v2[i];

    if (v == v2 ) return "Bob";
    
    reverse(v2.begin(), v2.end());
    
    if (v == v2) return "Bob";
    else return "Alice";
}

int main() {
    fastIO;
    int T;
    cin >> T;
    while (T--) {
        cout << solve() << endl;
    }
}
