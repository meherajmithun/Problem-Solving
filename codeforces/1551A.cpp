/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

void solve(){
    int n; cin >> n;
    int cnt_x = n / 3;
    int cnt_y = n / 3;
    if(n % 3 == 1) cnt_x++;
    else if(n % 3 == 2) cnt_y++;
    cout<<cnt_x<<" "<<cnt_y<<endl;
}
int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
         solve() ;
    }
}
