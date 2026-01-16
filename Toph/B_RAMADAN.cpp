#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<'\n';
vector<string> v = {"January","February","March","April","May","June","July"};
vector<char> v1 = {'A' , 'B' , 'C'};
vector<char> v0 = {'B' , 'C' , 'A'};
vector<char> v2 = {'C' , 'A' , 'B'};
void solve(){
    int n,m; cin >> n >> m;
    if(n % 3 == 0){
        cout<<v0[m-1]<<'\n';
    }
    else if(n % 3 == 1){
        cout<<v1[m-1]<<'\n';
    }
    else{
        cout<<v2[m-1]<<'\n';
    }
}

int main(){
    int tc = 1; //cin >> tc = =1;
    while(tc--){
        solve();
    }
}