/*
  IN THE NAME OF ALLAH
  Author:Meheraj Hossain Mithun
  Bangladesh Univerity Of Bussiness And Technology
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair < int , int > &p1 , const pair < int , int  > &p2){
     return (p1.first < p2.first);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int s,n,x,y,flag = 1;
  cin >> s >> n;
  vector<pair<int , int >>v(n);
  for(int i = 0; i < n; i++){
      cin >> v[i].first >> v[i].second;
  }
  sort(v.begin() , v.end() ,cmp);
  for(int i = 0; i < n; i++){
      if( s <= v[i].first){
          cout<<"NO";
          return 0;
      }
      s += v[i].second;
  }
  cout<<"YES";
}
