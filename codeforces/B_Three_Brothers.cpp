/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define ll long long
#define no (cout << "NO\n")
#define yes (cout << "YES\n")

int main(){
    fastIO;
    int a, b, c;
    cin >> a >> b;
    if(a == 1 and b == 2) cout<<3<<endl;
    else if(a == 2 and b == 1) cout<<3<<endl;
    else if(a == 1 and b == 3) cout<<2<<endl;
    else if(a == 3 and b == 1) cout<<2<<endl;
    else if(a == 2 and b == 3) cout<<1<<endl;
    else if(a == 3 and b == 2) cout<<1<<endl;
}