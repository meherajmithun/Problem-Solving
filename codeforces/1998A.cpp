/*
  IN THE NAME OF ALLAH
  Author:Meheraj Hossain Mithun
  Bangladesh Univerity Of Bussiness And Technology
*/
 
#include <bits/stdc++.h>
using namespace std;

string solve(){
        int xc, yc, k;
        cin >> xc >> yc >> k;
        for (int i = 0; i < k; i++) {
            cout << xc + i << " " << yc << endl;
        }
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