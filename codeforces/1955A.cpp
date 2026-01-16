/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin>>n >>a >>b;
    if(n * a <= b) cout<<n*a<<endl;
    else {
        int x = n / 2;
        int y = n % 2;
        int z = y * b;
        if(y != 0){
            if(a + b <= n * a) cout<<a+b<<endl;
            else cout<<n * a<<endl;
        }
        else {
            if(n * a <= x * b) cout<<n*a<<endl;
            else cout<<x*b<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}