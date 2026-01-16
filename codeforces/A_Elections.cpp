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

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == 0 && b == 0 && c == 0) cout << 1 << " "<< 1<<" " << 1 << endl;
    else {
        int d = max(a,max(b,c));
        d += 1;
        a = d - a;
        b = d - b;
        c = d - c;
        if(a == 1 and b != 1 and c != 1) a = 0;
        else if( b == 1 and a != 1 and c != 1) b = 0;
        else if(c == 1 and a != 1 and b != 1) c = 0;
        cout << a <<" "<< b <<" "<< c << endl;
        
    }
}

int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
         solve();
    }
    return 0;
}