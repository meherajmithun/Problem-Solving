/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n >= 1900){
        cout<<"Division 1"<<endl;
    }
    else if((n >= 1600) && (n < 1900)){
        cout<<"Division 2"<<endl;
    }
    else if((n >= 1400) && (n < 1600)){
        cout<<"Division 3"<<endl;
    }
    else{
        cout<<"Division 4"<<endl;
    }

}
int  main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}
