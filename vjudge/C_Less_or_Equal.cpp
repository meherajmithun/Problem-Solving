#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,target;
    cin >> n >> target;
    vector<int>v(n);
    for(auto &u : v) cin >> u;

    sort(v.begin() , v.end());
    if(target == 0 and v[0] == 1){
        cout<<-1<<'\n';
    }
    else if(target == 0 and v[0] != 1){
        cout<<1<<'\n';
    }

    else if(v[target-1] != v[target]){
        cout<<v[target-1]<<'\n';
    }
    else{
        cout<<-1<<'\n';
    }
}