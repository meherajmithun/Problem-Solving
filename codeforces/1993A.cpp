/*
  IN THE NAME OF ALLAH
  Author:Meheraj Hossain Mithun
  Bangladesh Univerity Of Bussiness And Technology
*/
#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    string s;
    cin >> n >> s;
    int m = 4 * n;
    int a=0,b=0,c=0,d=0,e=0;

    for(int i = 0; i < m; i++){
        if(s[i] == 'A') a++;
        if(s[i] == 'B') b++;
        if(s[i] == 'C') c++;
        if(s[i] == 'D') d++;
        if(s[i] == '?') e++;
    }
    int ans = 0;
    ans += min(a , n);
    ans += min(b , n);
    ans += min(c , n);
    ans += min(d , n);
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