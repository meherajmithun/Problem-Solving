/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int i,n,sum=0;
    cin>>n;
    int arr[n];
    for(i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(i = 0; i < n; i++){
        arr[i] = abs(arr[i]);
        sum += arr[i];
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
