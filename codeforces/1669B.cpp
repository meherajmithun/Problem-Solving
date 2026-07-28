/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> freq;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }
    for(auto &u : freq) {
        if(u.second >= 3) {
            return u.first;
        }
    }
    return -1;
} 

int main() {
    optimize();
    int T;
    cin >> T;
    while(T--) {
        cout << solve() << endl;
    }
}