/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

string solve(){
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for( int i = 0; i < n; i++){
        cin>>arr[i];
        arr1[i] = arr[i];
    }
    sort( arr , arr + n );
    for(int i = 0; i < n; i++){
        if(arr[i] != arr1[i]){
            return "YES";
        }
    }
    return "NO";
}
int main(){
    int T;
    cin>>T;
    while(T--){
        cout<<solve()<<endl;
    }
}