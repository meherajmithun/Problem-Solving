/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
#include<algorithm>
using namespace std;

int solve(){
    int n,i,sum = 1;
    cin>>n;
    int arr[n];
    for(i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr ,arr+n);
    sum = arr[0] + 1;
    for(i = 1 ; i < n ; i++){
        sum = sum * arr[i];
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}
