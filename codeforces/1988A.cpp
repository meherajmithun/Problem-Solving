/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,k;
    cin>>n >>k;
    int m = k - 1,count = 0;
    while(n > 1){
        count++;
        n -= m;
    }
    return count;
}
int main(){
    int T;
    cin>> T;
    while(T--){
        cout<<solve()<<endl;
    }
}