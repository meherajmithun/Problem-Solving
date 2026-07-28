/*
  IN THE NAME OF ALLAH
  Author:Meheraj Hossain Mithun
  Bangladesh Univerity Of Bussiness And Technology
*/
#include <bits/stdc++.h>
using namespace std;

string solve(){
    int n;
    cin >> n;
    while(n >=  0){
        if(n % 3 == 0) n = n - 3;
        else n = n - 7;
        if(n == 0) return "YES";
        
    }
    return "NO";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        cout<<solve()<<endl;
    }
}