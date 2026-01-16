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
    int n,count=0;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin() , v.end());
    int sz = unique(v.begin() , v.end()) - v.begin();

    for(int i = 0; i < sz; i++){
        if(v[i] - v[i+1] == -1 ){
            count++;
            if(count == 2){
                cout<<"YES";
                break;
            }
        }
        else {
            count = 0;
        }
    }
    if(count == 0){
    cout<<"NO";
    }
}
