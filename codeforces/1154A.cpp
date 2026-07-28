/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long arr[4];
    for(int i = 0; i < 4; i++){
        cin>>arr[i];
    }
    sort(arr, arr + 4);
    int a = arr[3] - arr[2];
    int b = arr[3] - arr[1];
    int c = arr[3] - arr[0];
    cout<<a <<" " <<b <<" " <<c<<" "<<endl;
}