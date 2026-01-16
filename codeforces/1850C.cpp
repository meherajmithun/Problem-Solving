/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int i,j;
    vector<string>s(8);
    for(i = 0 ; i < 8 ; i++){
        cin>>s[i];
    }
    for(i = 0 ; i < 8 ; i++){
        for(j = 0 ; j < 8 ; j++){
            if(s[i][j] != '.'){
                cout<<s[i][j];
            }
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

