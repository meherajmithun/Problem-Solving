/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

string solve(){
    int n,i,even=0,odd=0;
    cin>>n;
    int arr[n],sum=0;
    for(i = 0; i < n; i++){
        cin>>arr[i];
    }

    if(arr[n-1] % 2 == 0) even = even + arr[n-1];
    else if (arr[n-1] % 2 != 0) odd = odd + arr[n-1];

    for(i = 0; i < n-1; i++){
        if(arr[i] % 2 ==0) even = even + arr[i];
        else odd = odd + arr[i];
    }
	
    if(even > odd) return "YES";
    else return "NO";
}
int main(){
    int T;
    cin>>T;
    while(T--){
        cout<<solve() <<endl;
    }
}