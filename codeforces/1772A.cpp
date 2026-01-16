/*
  IN THE NAME OF ALLAH
  Author:Meheraj Hossain Mithun
  Bangladesh Univerity Of Bussiness And Technology
*/

#include <bits/stdc++.h>
using namespace std;

string solve(){
    int n,cr1=0,cr2=0,cr1b=0,cr2b=0,cr3=0;
    string s1,s2;
    cin >> n >> s1 >> s2;
    if(n == 1){
        if( (s1[0] == 'G' || s1[0] == 'B') && (s2[0] == 'G' || s2[0] == 'B')) return "YES";
        else if(s1[0] == 'R' && s2[0] == 'R') return "YES";
        else return "NO";
    }
    for(int i = 0; i < n; i++){
        if(s1[i] == 'R') cr1++;
        if(s2[i] == 'R') cr2++;
        if(s1[i] == 'R' && s2[i] == 'R') cr3++;
        if(s1[i] == 'B' || s1[i] == 'G') cr1b++;
        if(s2[i] == 'G' || s2[i] == 'B') cr2b++;
    }
    if(cr1 == cr2 && cr1 == cr3 ) return "YES";
    else if (cr1b == cr2b){
        if(cr1 == 0 && cr2 == 0) return "YES";
        else return "NO";
    }
    else return "NO";
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
