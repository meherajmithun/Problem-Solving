/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,flag = 0;
    cin>>n >> k;
    int arr[n];
    for ( int i = 0; i < n; i++ ){
        cin>>arr[i];
    }
    sort(arr, arr + n );
    for( int i = 0; i < n; i++){
        if(arr[i] == k){
            flag =  1;
        }
    }
    if( flag ) cout<<"YES" << endl;
    else cout<<"NO" <<endl;
}
int main(){
    int T;
    cin>> T;
    while(T--){
        solve();
    }
}