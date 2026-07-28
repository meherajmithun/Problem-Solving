/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int solve(){
    int n, count_0 = 0,count = 0,h=1;
    cin>> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count_0 = 0;
            count++;
            if(count >= 2) h += 5;
            else h++;
        }
        else {
            count = 0;
            count_0++;
            if(count_0 == 2) return -1;
        }
    }
    return h;
}
int main(){
    optimize();
    int T;
    cin >> T;
    while(T--){
        cout << solve() <<endl;
    }
}