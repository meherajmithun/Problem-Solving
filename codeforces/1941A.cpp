/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int loser(){
    int n,m,k,i,j,count=0,sum=0;
    cin>>n>>m>>k;
    int l[n],r[m];
    for(i = 0 ; i < n ; i++){
        cin>>l[i];
    }
    for(j = 0 ; j < m ; j++){
        cin>>r[j];
    }
    for( i = 0; i < n; i++){
        for(j = 0;j < m; j++){
            sum=0;
            sum = l[i] + r[j];
            if(sum <= k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<loser()<<endl;
    }
}
