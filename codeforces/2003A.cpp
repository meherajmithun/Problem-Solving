/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

string solve(){
    int n; cin >> n;
    string s;
    cin >> s;
    if(s[0] == s[n-1]) return "NO";
    else return "YES";
}
int main(){
    int T;
    cin >> T;
    while(T--){
        cout<<solve()<<endl;
    }
}


