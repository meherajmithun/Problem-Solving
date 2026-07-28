/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int solve(){
    long long x,y,n;
    cin>>x >>y >>n;
    for(long long i = x; i >= 0; i--){
        if(i % x == y){
            return i;
            break;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}