/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char>v;
    for(int i = 0; i < n; i++){
        if(s[i] - 48 == 0){
            if(s[i+1] - 48 == 0){

                int k = s[i-1] - 48;
                int j = k * 10;
                char z = j + 96;
                v.push_back(z);
            }
            else {
                v.pop_back();
                v.pop_back();
                int a = s[i-1] - 48 ;
                int b = s[i-2] - 48 ;
                int c = a + b*10;
                char x = c + 96;
                v.push_back(x);
            }

      }
        else {
            int m = s[i] - 48;
            char y  = m + 96;
            v.push_back(y);
        }
    }
    for(auto u : v) cout<<u;
    cout<<endl;
}
int main() {
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}

