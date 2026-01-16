/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v( n );
    for(int i = 0; i < n; i++) cin>>v[i];
    int s = 0, d = 0;

    //f1 for turning serea's turn.the first turn is sereja mentioned in the question
    
    int f1 = 1;
    while( !v.empty()){
        if(f1 == 1){
            if(v[0] > v.back()){
                s += v[0];
                v.erase(v.begin());
            }
            else {
                s += v.back();
                v.pop_back();
            }
            //Now the turns is dema.
            f1 = 0;
        }
        else {
            if(v[0] > v.back()){
                d += v[0];
                v.erase(v.begin());
            }
            else{
                d += v.back();
                v.pop_back();
            }
            //now the turns is sereja.
            f1 = 1;
        }
    }
    cout<<s <<" " <<d <<endl;
}