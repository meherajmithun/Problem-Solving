#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a,b; cin >> a >> b;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    int sum = 0;
    for(int i=a; i<=b; i++){
        sum += v[i];
    }
    cout<<sum<<endl;
}
