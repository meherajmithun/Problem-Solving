/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,count=0;
    cin>>n;
    long long x = n;
    if(n == 1) cout<<0 <<endl;
    else {
        while(n != 1){
            if(n % 6 == 0){
                n = n / 6;
            }
            else {
                n = n * 2;
            }
            count++;
            if(count > x){
                cout<<-1<<endl;
                break;
            }
        }
        if(count < x){
            cout<<count<<endl;
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