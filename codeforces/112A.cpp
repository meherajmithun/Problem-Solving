/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    transform(a.begin() , a.end() , a.begin(), :: toupper);
    transform(b.begin() , b.end() , b.begin(), :: toupper);
    
    if(a < b) cout << -1 <<endl;
    else if( a > b ) cout<< 1 << endl;
    else cout<< 0 << endl;
}