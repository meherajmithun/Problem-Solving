/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,a,count=0;
    cin>>n>>a;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr , arr + n);
    for(int i = 0; i < n; i++){
        if(arr[n-1] > a){
            arr[0]++;
            arr[n-1]--;
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == a){
            count++;
        }
    }
    return count;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
}

