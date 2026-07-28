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
    int n;
    cin >> n;
    if(n % 4 == 0) cout <<"YES";
    else if(n % 7 == 0) cout <<"YES";
    else if(n % 47 == 0) cout <<"YES";
    else if(n % 744 == 0) cout <<"YES";
    else if(n % 477 == 0) cout<<"YES";
    else cout <<"NO";
}
