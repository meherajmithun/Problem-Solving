/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,i,j=0;
    string s;
    cin>>n>>s;
    int arr[n];
    for(i = 0; i < n; i++){
        if(s[i] == 'B'){
            arr[j] = i;
            j++;
        }
    }
    cout<<arr[j-1]+1-arr[0]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
