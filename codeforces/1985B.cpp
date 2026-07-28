/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int solve (){
    int n,ans;
    cin>>n;
    (n == 3) ? ans = 3 : ans = 2;

    return ans;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int result = solve();
        cout<<result<<endl;
    }

}
