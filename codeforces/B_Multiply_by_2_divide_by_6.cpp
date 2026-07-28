/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
//#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    int count = 0;
    while(n != 1){
        if(n % 6 == 0) n /= 6;
        else if(n %3 == 0) n *= 2;
        else {
            cout << -1 << endl;
            return ;
        }
        count++;
    }
    cout<<count<<endl;
}
int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
         solve() ;
    }
}
