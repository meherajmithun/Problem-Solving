/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

string loser(){
    int n;
    cin>>n;
    if(n % 3 != 0){
        return "First";
    }
    else {
        return "Second";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<loser()<<endl;
    }
}
