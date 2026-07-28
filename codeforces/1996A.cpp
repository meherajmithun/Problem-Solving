/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin >> n;
    int minAnimals = n / 4 + (n % 4 != 0 ? 1 : 0);
        
    cout << minAnimals << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}