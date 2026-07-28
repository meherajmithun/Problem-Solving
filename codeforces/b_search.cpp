//You're given an array and an int x.Your task is to find out the index that ocuurs the int x.
//If the integer is not occurs in the array the print -1.
//Example -> arr[] = {1,2,3,3,5,8,8,10,10,11} and x = 8.
//array must be sorted for binary search.

#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter"<<endl;
    int n ,k; cin >> n >> k;
    int arr[n] ;
    for(auto &u : arr) cin >> u;
    //int ans = n;
    int l = 0, r = n-1;
    while(l <= r){
        int mid = ( l+r )/2;
        if(arr[mid] == k){
            cout<<mid<<endl;
            return 0;
        }
        if(arr[mid] > k) r = mid - 1;
        else l = mid+1;
    }
    cout<<-1<<endl;
}

