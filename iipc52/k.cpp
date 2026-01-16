/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

using namespace std;

void solve(int arr[]){
    int q,r,sum=0;
    cin>>q>>r;
    for(int i = q - 1 ; i < r ; i++){
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
}
int main(){
    optimize();
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    while(m--){
        solve(arr);
    }
}
