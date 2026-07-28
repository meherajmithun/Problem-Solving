/*
  IN THE NAME OF ALLAH
  Author:Meheraj Hossain Mithun
  Bangladesh Univerity Of Bussiness And Technology
*/

#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a , b, c , d,ans = 0;
    cin >> a >> b >> c >> d;
    if(a > c && b > d) ans++;
    if(a > d && b > c) ans++;
    if(b > c && a > d) ans++;
    if(b > d && a > c) ans++;
    return ans;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while(T--){
      cout<<solve()<<endl;
  }
}
