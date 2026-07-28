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

  int n,m,flag=0;
  cin >> n >> m;
  char a;
  for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
          cin >> a;
          if(a != 'W' and a != 'B' and a !='G') flag=1;
      }
  }
  if(flag) cout<<"#Color"<<endl;
  else cout<<"#Black&White"<<endl;
}

