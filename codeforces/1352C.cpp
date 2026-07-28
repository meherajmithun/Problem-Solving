/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int loser(){
    long long n,k;
    cin>>n >>k;
    long long ans = k + (k-1)/(n-1);
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<loser()<<endl;
    }
}