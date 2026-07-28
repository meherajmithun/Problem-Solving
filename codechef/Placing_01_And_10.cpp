#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        int x,y; cin>>x>>y;
        int k = x+y;
        int t = max(0,abs(x-y)-1);
        cout<<k+t<<'\n';
    }
}