#include<iostream>
#include<string>
#include<vector>
#include<map>
#define mod 1000000009
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    int x,y;
    cin >> x >> y;
    if(x +(y*10) < 100) cout<<"No";
    else cout << "Yes";
}

int main(){
    slow();
    int tc = 1; 
    //cin >> tc;
    while(tc--){
        solve();
    }
}