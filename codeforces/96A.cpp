/*
  IN THE NAME OF ALLAH
  Author:Meheraj Hossain Mithun
  Bangladesh Univerity Of Bussiness And Technology
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int x = 0, y = 0, z = 0,ans=0;
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
      if(s[i] =='1'){
          x++;
          y = 0;
      }
      else{
          x = 0;
          y++;
      }
      if(x == 7 || y == 7){
          ans = 1;
      }
  }
  if(ans) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}

