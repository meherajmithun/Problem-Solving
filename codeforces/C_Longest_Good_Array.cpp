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

int main(){
    fastIO;
    int t;
    cin >> t;

    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long length = 0;
        long long current = l;
        long long difference = 1;

        while (current + difference <= r) {
            current += difference;
            difference++;
            length++;
        }
        cout << length + 1 << endl;
    }

    return 0;
}

