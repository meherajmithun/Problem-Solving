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
  vector<string>s(8);
  int c = 0 , b = 0;
  for(int i = 0; i < 8; i++) cin >> s[i];
  for(int i = 0 ; i < 8; i++){
      for(int j = 0; j < 8; j++){
          if(s[i][j] == 'Q') c += 9;
          else if(s[i][j] == 'R') c += 5;
          else if(s[i][j] == 'B') c += 3;
          else if(s[i][j] == 'P') c += 1;
          else if(s[i][j] == 'N') c += 3;
          if(s[i][j] == 'q') b += 9;
          else if(s[i][j] == 'r') b += 5;
          else if(s[i][j] == 'b') b += 3;
          else if(s[i][j] == 'p') b += 1;
          else if(s[i][j] == 'n') b += 3;
      }
  }
  if(c > b) cout<<"White"<<endl;
  else if(b > c) cout<<"Black"<<endl;
  else cout<<"Draw"<<endl;
}

