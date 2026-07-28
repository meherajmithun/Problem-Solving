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
    int a,b,c;
    cin >> a >> b >> c;
    if(a > b) swap(a , b);
    if(a > c) swap(a , c);
    if(b > c) swap(b , c);

    int medium = b;
    int result = abs( a - medium ) + abs( b - medium ) + abs( c - medium);
    cout << result<<endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}