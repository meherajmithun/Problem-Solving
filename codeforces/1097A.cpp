/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main(){
    optimize();
    int flag=0;
    string s,s1;
    cin >> s;
    for(int i = 0; i < 5; i++){
        cin >> s1;
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                if(s[j] == s1[k]){
                    flag = 1;
                }
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
